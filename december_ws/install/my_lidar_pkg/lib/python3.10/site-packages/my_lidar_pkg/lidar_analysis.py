#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from laser_package_msgs.msg import Laser
import numpy as np
import time

class LidarAnalyzer(Node):
	def __init__(self):
		super().__init__('lidar_analyzer')
		self.subscription = self.create_subscription(
			LaserScan,"/scan",self.listner_callback,10)

	def listner_callback(self, msg):
		#ros data to numpy
		ranges = np.array(msg.ranges)

		#preprocessing : inf data
		ranges = np.where(ranges == float('inf'), 3.5, ranges)

		#check front side
		front_ranges = np.concatenate((ranges[:30],ranges[-30:]))
		left_ranges = ranges[60:120]
		right_ranges = ranges[240:300]
		back_ranges = ranges[150:210]

		#calculate min and mean
		front_min_dist = np.min(front_ranges)
		front_avg_dist = np.mean(front_ranges)

		left_min_dist = np.min(left_ranges)
		left_avg_dist = np.mean(left_ranges)

		right_min_dist = np.min(right_ranges)
		right_avg_dist = np.mean(right_ranges)

		back_min_dist = np.min(back_ranges)
		back_avg_dist = np.mean(back_ranges)

		safe_dist = 0.6
		if front_min_dist < safe_dist:
			self.get_logger().warn(f"dangerous! front {front_min_dist}m left!")
		else:
			self.get_logger().info(f"safe ranges... front {front_avg_dist}m left ^^")

		if left_min_dist < safe_dist:
			self.get_logger().warn(f"dangerous! left {left_min_dist}m left!")
		else:
			self.get_logger().info(f"safe ranges... left {left_avg_dist}m left ^^")

		if right_min_dist < safe_dist:
			self.get_logger().warn(f"dangerous! right {right_min_dist}m left!")
		else:
			self.get_logger().info(f"safe ranges... right {right_avg_dist}m left ^^")\

		if front_min_dist < safe_dist and left_min_dist < safe_dist and right_min_dist < safe_dist:
			action = "go_back"
		elif front_min_dist < safe_dist:
			action = "turn_left" if left_min_dist >= right_min_dist else "turn_right"
		else:
			action = "go_forward"

		if front_min_dist < safe_dist and left_min_dist < safe_dist and right_min_dist < safe_dist and back_min_dist < safe_dist:
			pattern = "all_wall"
		elif front_min_dist < safe_dist and left_min_dist < safe_dist and right_min_dist < safe_dist:
			pattern = "front,left,right_wall"
		elif back_min_dist < safe_dist and left_min_dist < safe_dist and right_min_dist < safe_dist:
			pattern = "back,left,right_wall"
		elif back_min_dist < safe_dist and right_min_dist < safe_dist:
			pattern = "back,right_wall"	
		elif back_min_dist < safe_dist and left_min_dist < safe_dist:
			pattern = "back,left_wall"
		elif left_min_dist < safe_dist and right_min_dist < safe_dist:
			pattern = "left,right_wall"	
		elif front_min_dist < safe_dist and left_min_dist < safe_dist:
			pattern = "front,left_wall"
		elif front_min_dist < safe_dist and right_min_dist < safe_dist:
			pattern = "front,right_wall"
		elif front_min_dist < safe_dist:
			pattern = "front_wall"
		elif right_min_dist < safe_dist:
			pattern = "right_wall"
		elif left_min_dist < safe_dist:
			pattern = "left_wall"
		elif back_min_dist < safe_dist:
			pattern = "back_wall"
		else:
			pattern = "none"	
		self.get_logger().info(action)
		self.get_logger().info(pattern)
		time.sleep(2)

def main() :
	rclpy.init()

	node = LidarAnalyzer()
	rclpy.spin(node)

	node.destroy_node()
	rclpy.shutdown()

if __name__ == '__main__':
	main()