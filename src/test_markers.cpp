/*
 * Copyright (c) 2023, Tinker Twins
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Tinker Twins nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

// %Tag(FULLTEXT)%
// %Tag(INCLUDES)%
#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
// %EndTag(INCLUDES)%

// %Tag(INIT)%
int main( int argc, char** argv )
{
  ros::init(argc, argv, "test_markers");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_markers", 1);

  while (ros::ok())
  {
    visualization_msgs::Marker marker1_msg;
    marker1_msg.header.frame_id = "map";
    marker1_msg.header.stamp = ros::Time::now();
    marker1_msg.ns = "test_markers";
    marker1_msg.id = 1;
    marker1_msg.type = visualization_msgs::Marker::SPHERE;
    marker1_msg.action = visualization_msgs::Marker::ADD;
    marker1_msg.pose.position.x = -2.0;
    marker1_msg.pose.position.y = 0;
    marker1_msg.pose.position.z = 0;
    marker1_msg.pose.orientation.x = 0.0;
    marker1_msg.pose.orientation.y = 0.0;
    marker1_msg.pose.orientation.z = 0.0;
    marker1_msg.pose.orientation.w = 1.0;
    marker1_msg.scale.x = 0.5;
    marker1_msg.scale.y = 0.5;
    marker1_msg.scale.z = 0.001;
    marker1_msg.color.r = 1.0f;
    marker1_msg.color.g = 0.0f;
    marker1_msg.color.b = 0.0f;
    marker1_msg.color.a = 0.5;
    marker1_msg.lifetime = ros::Duration();

    visualization_msgs::Marker marker2_msg;
    marker2_msg.header.frame_id = "map";
    marker2_msg.header.stamp = ros::Time::now();
    marker2_msg.ns = "test_markers";
    marker2_msg.id = 2;
    marker2_msg.type = visualization_msgs::Marker::SPHERE;
    marker2_msg.action = visualization_msgs::Marker::ADD;
    marker2_msg.pose.position.x = 0.0;
    marker2_msg.pose.position.y = 0;
    marker2_msg.pose.position.z = 0;
    marker2_msg.pose.orientation.x = 0.0;
    marker2_msg.pose.orientation.y = 0.0;
    marker2_msg.pose.orientation.z = 0.0;
    marker2_msg.pose.orientation.w = 1.0;
    marker2_msg.scale.x = 1.0;
    marker2_msg.scale.y = 1.0;
    marker2_msg.scale.z = 0.001;
    marker2_msg.color.r = 0.0f;
    marker2_msg.color.g = 1.0f;
    marker2_msg.color.b = 0.0f;
    marker2_msg.color.a = 0.5;
    marker2_msg.lifetime = ros::Duration();

    visualization_msgs::Marker marker3_msg;
    marker3_msg.header.frame_id = "map";
    marker3_msg.header.stamp = ros::Time::now();
    marker3_msg.ns = "test_markers";
    marker3_msg.id = 3;
    marker3_msg.type = visualization_msgs::Marker::SPHERE;
    marker3_msg.action = visualization_msgs::Marker::ADD;
    marker3_msg.pose.position.x = 2.0;
    marker3_msg.pose.position.y = 0;
    marker3_msg.pose.position.z = 0;
    marker3_msg.pose.orientation.x = 0.0;
    marker3_msg.pose.orientation.y = 0.0;
    marker3_msg.pose.orientation.z = 0.0;
    marker3_msg.pose.orientation.w = 1.0;
    marker3_msg.scale.x = 1.5;
    marker3_msg.scale.y = 1.5;
    marker3_msg.scale.z = 0.001;
    marker3_msg.color.r = 0.0f;
    marker3_msg.color.g = 0.0f;
    marker3_msg.color.b = 1.0f;
    marker3_msg.color.a = 0.5;
    marker3_msg.lifetime = ros::Duration();

    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      sleep(1);
    }
    marker_pub.publish(marker1_msg);
    marker_pub.publish(marker2_msg);
    marker_pub.publish(marker3_msg);

    r.sleep();
  }
}