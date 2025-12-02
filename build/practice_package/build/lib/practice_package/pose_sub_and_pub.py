import rclpy as rp
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from practice_package_msgs.msg import PoseToVal

class OnlyPose(Node):
	def __init__(self):
		super().__init__('turtle_pose')
		self.sub_pose = self.create_subscription(Pose, '/turtle1/pose', self.callback_pose, 10)
		self.timer_period = 1.0
		self.publisher = self.create_publisher(PoseToVal, '/only_pose', 10)
		self.timer = self.create_timer(self.timer_period, self.timer_callback)
		self.pose_val = PoseToVal()

	def callback_pose(self, msg):
		self.pose_val.pose_x = msg.x
		self.pose_val.pose_y = msg.y
		self.pose_val.pose_theta = msg.theta

		now = self.get_clock().now()
		elapsed = (now - self.start_time).nanoseconds / 1e9
		self.pose_val.timer = elapsed

	def timer_callback(self) :
		self.publisher.publish(self.pose_val)

def main(args=None):
	rp.init(args=args)

	turtle_pose_node = OnlyPose()
	rp.spin(turtle_pose_node)
	
	turtle_pose_node.destroy_node()
	rp.shutdown()

if __name__ == '__main__':
	main()