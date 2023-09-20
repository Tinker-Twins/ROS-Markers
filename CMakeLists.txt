cmake_minimum_required(VERSION 3.0.2)
project(markers)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  visualization_msgs
)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(basic_shapes src/basic_shapes.cpp)
add_executable(test_marker src/test_marker.cpp)
add_executable(test_markers src/test_markers.cpp)

target_link_libraries(basic_shapes ${catkin_LIBRARIES})
target_link_libraries(test_marker ${catkin_LIBRARIES})
target_link_libraries(test_markers ${catkin_LIBRARIES})