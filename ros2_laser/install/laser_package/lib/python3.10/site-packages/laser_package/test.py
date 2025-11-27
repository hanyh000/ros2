import rclpy as rp
from rclpy.node import Node

from laser_package_msgs.msg import Laser
import math
import random

# ======== LIDAR 기본 설정 ========
ANGLE_MIN_DEG = 0
ANGLE_MAX_DEG = 359
ANGLE_INCREMENT_DEG = 1
NUM_POINTS = 360
RANGE_MIN = 0.12
RANGE_MAX = 3.5

# ======== 사용할 패턴 목록 ========
PATTERNS = [
    "front_wall",
    "left_wall",
    "right_wall",
    "leftandright_wall",
    "frontandright_wall",
    "frontandleft_wall",
    "frontandleftandright_wall"
]

# ======== Scan 생성 함수 ========
def create_empty_scan():
    ranges = [RANGE_MAX for _ in range(NUM_POINTS)]
    intensities = [100.0 for _ in range(NUM_POINTS)]  # float으로 변경
    scan = {
        "angle_min": math.radians(ANGLE_MIN_DEG),
        "angle_max": math.radians(ANGLE_MAX_DEG),
        "angle_increment": math.radians(ANGLE_INCREMENT_DEG),
        "range_min": RANGE_MIN,
        "range_max": RANGE_MAX,
        "ranges": ranges,
        "intensities": intensities
    }
    return scan

# ======== Wall 패턴 함수 ========
def make_the_wall(ranges, center_deg, width_deg):
    half_width = width_deg // 2
    for offset in range(-half_width, half_width + 1):
        idx = (center_deg + offset) % NUM_POINTS
        ranges[idx] = 0.4

def pattern_front_wall(scan):
    make_the_wall(scan["ranges"], center_deg=0, width_deg=40)

def pattern_left_wall(scan):
    make_the_wall(scan["ranges"], center_deg=90, width_deg=30)

def pattern_right_wall(scan):
    make_the_wall(scan["ranges"], center_deg=270, width_deg=30)

def pattern_leftandright_wall(scan):
    make_the_wall(scan["ranges"], center_deg=90, width_deg=30)
    make_the_wall(scan["ranges"], center_deg=270, width_deg=30)

def pattern_frontandright_wall(scan):
    make_the_wall(scan["ranges"], center_deg=0, width_deg=40)
    make_the_wall(scan["ranges"], center_deg=270, width_deg=30)

def pattern_frontandleft_wall(scan):
    make_the_wall(scan["ranges"], center_deg=0, width_deg=40)
    make_the_wall(scan["ranges"], center_deg=90, width_deg=30)

def pattern_frontandleftandright_wall(scan):
    make_the_wall(scan["ranges"], center_deg=0, width_deg=40)
    make_the_wall(scan["ranges"], center_deg=90, width_deg=30)
    make_the_wall(scan["ranges"], center_deg=270, width_deg=30)

# ======== 단일 스캔 생성 ========
def generate_single_scan(pattern_name):
    scan = create_empty_scan()
    if pattern_name == "front_wall":
        pattern_front_wall(scan)
    elif pattern_name == "left_wall":
        pattern_left_wall(scan)
    elif pattern_name == "right_wall":
        pattern_right_wall(scan)
    elif pattern_name == "leftandright_wall":
        pattern_leftandright_wall(scan)
    elif pattern_name == "frontandright_wall":
        pattern_frontandright_wall(scan)
    elif pattern_name == "frontandleft_wall":
        pattern_frontandleft_wall(scan)
    elif pattern_name == "frontandleftandright_wall":
        pattern_frontandleftandright_wall(scan)
    return scan

# ======== ROS2 Node ========
class LaserPub(Node):
    def __init__(self):
        super().__init__('laser_publisher')

        self.publisher = self.create_publisher(Laser, 'laser_val/laserpub', 10)
        self.timer_period = 2.0
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # 초기 스캔 생성
        self.pattern_name = random.choice(PATTERNS)
        scan = generate_single_scan(self.pattern_name)

        self.laser_val = Laser()
        self.laser_val.angle_min = scan["angle_min"]
        self.laser_val.angle_max = scan["angle_max"]
        self.laser_val.angle_increment = scan["angle_increment"]
        self.laser_val.range_min = scan["range_min"]
        self.laser_val.range_max = scan["range_max"]
        self.laser_val.ranges = scan["ranges"]
        self.laser_val.intensities = scan["intensities"]
        self.laser_val.pattern_name = self.pattern_name

    def timer_callback(self):
        # 매번 랜덤 패턴 선택
        self.pattern_name = random.choice(PATTERNS)

        scan = generate_single_scan(self.pattern_name)
        self.laser_val.ranges = scan["ranges"]
        self.laser_val.intensities = scan["intensities"]
        self.laser_val.pattern_name = self.pattern_name

        self.publisher.publish(self.laser_val)
        self.get_logger().info(f"Published laser scan with pattern: {self.pattern_name}")

# ======== Main ========
def main(args=None):
    rp.init(args=args)
    node = LaserPub()
    rp.spin(node)
    node.destroy_node()
    rp.shutdown()

if __name__ == '__main__':
    main()
