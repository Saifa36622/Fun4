#!/usr/bin/env python3

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import os
import xacro    
    
def generate_launch_description():

    launch_description = LaunchDescription()
    
    pkg = get_package_share_directory('example_description')
    rviz_path = os.path.join(pkg,'config','display.rviz')
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz',
        arguments=['-d', rviz_path],
        output='screen')
    
    path_description = os.path.join(pkg,'robot','visual','my-robot.xacro')
    robot_desc_xml = xacro.process_file(path_description).toxml()

    
    parameters = [{'robot_description':robot_desc_xml}]

    robot_state_publisher = Node(package='robot_state_publisher',
                                  executable='robot_state_publisher',
                                  output='screen',
                                  parameters=parameters
    )

    joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui'
    )


    
    launch_description.add_action(rviz)
    launch_description.add_action(robot_state_publisher)

    random = Node(
    package='fun4',
    namespace='',
    executable='Random.py',
    name='random'
    )

    launch_description.add_action(random)

    controller = Node(
    package='fun4',
    namespace='',
    executable='controller.py',
    name='controller'
    )

    launch_description.add_action(controller)
    
    return launch_description