#include <ros/ros.h>
#include <darknet_ros_msgs/BoundingBoxes.h>

void boundingBoxCallback(const darknet_ros_msgs::BoundingBoxes::ConstPtr& msg) {
    // Process detected objects or humans here
    for (const auto& bbox : msg->bounding_boxes) {
        // Extract object/human information from the bounding box
        // Perform desired actions or analysis
    }
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "object_detection_node");
    ros::NodeHandle nh;

    // Subscribe to the bounding boxes topic
    ros::Subscriber sub = nh.subscribe("/darknet_ros/bounding_boxes", 10, boundingBoxCallback);

    // Add your logic here

    ros::spin();
    return 0;
}
