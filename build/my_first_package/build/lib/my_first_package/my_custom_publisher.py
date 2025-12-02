import rclpy as rp
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtlesimPublisher(Node):
	def __init__(self):
		super().__init__('turtlesim_publisher')
		self.publisher = self.create_publisher(Twist, 'turtle1/cmd_vel',10)
		timer_period = 2.0
		self.timer = self.create_timer(timer_period, self.timer_callback)

	def timer_callback(self):
		move = str(input("입력 :"))
		msg = Twist()
		if move == 'w':
			msg.linear.x = 2.0
			msg.angular.z = 0.0
			self.publisher.publish(msg)
		elif move == 'a':
			msg.linear.x = 0.0
			msg.angular.z = 0.8
			self.publisher.publish(msg)
		elif move == 'd':
			msg.linear.x = 0.0
			msg.angular.z = -0.8
			self.publisher.publish(msg)
		elif move == 'q':
			msg.linear.x = 0.0
			msg.angular.z = 0.0
			self.publisher.publish(msg)
			TurtlesimPublisher.destroy_node()
		else :
			msg.linear.x = 0.0
			msg.angular.z = 0.0
			self.publisher.publish(msg)

def main(args=None):
	rp.init(args=args)
	turtlesim_publisher = TurtlesimPublisher()
	rp.spin(turtlesim_publisher)
	turtlesim_publisher.destroy_node()
	rp.shutdown()

if __name__ == '__main__':
	main()
