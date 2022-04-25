cmake_minimum_required(VERSION 3.22)
project(visitor)

set(CMAKE_CXX_STANDARD 20)

add_executable(visitor src/main.cpp include/shapes/shape.h include/shapes/shape_visitor.h include/shapes/circle.h include/shapes/area_visitor.h include/shapes/triangle.h include/shapes/rectangle.h src/area_visitor.cpp src/circle.cpp src/triangle.cpp src/rectangle.cpp)
add_executable(visitor_test test/test.cpp include/shapes/shape.h include/shapes/shape_visitor.h include/shapes/circle.h include/shapes/area_visitor.h include/shapes/triangle.h include/shapes/rectangle.h src/area_visitor.cpp src/circle.cpp src/triangle.cpp src/rectangle.cpp )
