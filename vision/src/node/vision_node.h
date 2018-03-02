#ifndef VISION_VISION_NODE_H
#define VISION_VISION_NODE_H
#include <vision_suturo_msgs/objects.h>
#include "gazebo_msgs/GetModelState.h"
#include "gazebo_msgs/ModelState.h"
#include "object_detection/ObjectDetection.h"
#include "object_detection/VisObjectInfo.h"
#include "sensor_msgs/PointCloud2.h"
#include <pcl_ros/point_cloud.h>
#include <visualization_msgs/Marker.h>
#include "../viewer/viewer.h"
#include "../perception/perception.h"
#include "../perception/short_types.h"
bool getObjects(vision_suturo_msgs::objects::Request &req, vision_suturo_msgs::objects::Response &res);
bool getPoses(vision_suturo_msgs::poses::Request &req, vision_suturo_msgs::poses::Response &res);
void sub_kinect_callback(PointCloudRGBPtr kinect);
void start_node(int argc, char **argv);

#endif //VISION_VISION_NODE_H
