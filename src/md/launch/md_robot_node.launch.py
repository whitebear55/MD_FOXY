from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='md',
            executable='md_robot_node',
            name='md_robot_node',
            output='screen',
            parameters=[
                {'use_MDUI': 0},               # 0: not use MDUI, 1: use MDUI
                {'serial_port': 'ttyUSB0'},    # COM port
                {'serial_baudrate': 57600},    # Motor controller baudrate
                {'wheel_radius': 0.085},      # unit: meter
                {'wheel_length': 0.54},       # unit: meter
                {'reduction': 30},
                {'reverse_direction': 0},      # 0: forward, 1: reverse
                {'maxrpm': 1000},              # unit: RPM
                {'enable_encoder': 0},         # 0: hall sensor, 1: encoder
                {'encoder_PPR' : 16384},          # encoder PPR (if using encoder position)
                {'slow_start': 300},           # unit: RPM
                {'slow_down': 300},            # unit: RPM
            ]
        ),
    ])
