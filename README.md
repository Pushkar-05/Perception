# Perception

# PR2 Robot Object Detection with YOLO, Darknet, and ROS

![PR2 Object Detection]
<img width="474" alt="Screenshot 2023-09-26 at 5 10 34 PM" src="https://github.com/Pushkar-05/Perception/assets/116113784/8f337516-4047-42e6-a93a-1725f008535c">
<img width="448" alt="Screenshot 2023-09-26 at 5 10 51 PM" src="https://github.com/Pushkar-05/Perception/assets/116113784/8545b658-cc66-4682-bed6-628dde0c52d8">



## Overview

This project demonstrates how to integrate YOLO (You Only Look Once) and Darknet with the PR2 robot using ROS (Robot Operating System) and Gazebo simulations for real-time object and human detection.

## Features

- Real-time object and human detection.
- Integration with PR2 robot and Gazebo simulations.
- ROS-based implementation for seamless control and interaction.

## Getting Started

### Prerequisites

- ROS (Melodic or later)
- Gazebo
- Darknet
- Other dependencies (list any additional dependencies here)

### Installation

1. Clone this repository: git clone https://github.com/Pushkar-05/Perception.git
   
2. Build and compile your ROS workspace.

3. Launch the PR2 robot and the object detection node: roslaunch your_package_name pr2_object_detection.launch


### Usage

- Customize the object detection logic in the `object_detection_node.cpp` file to suit your specific needs.
- Monitor object and human detection in real-time by subscribing to the `/darknet_ros/bounding_boxes` topic.


## Contact

- Pushkar Shinde
- pps7160@nyu.edu
- LinkedIn Profile: [[Your LinkedIn Profile URL](https://www.linkedin.com/in/pushkar-shinde/)]



