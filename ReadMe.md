# Visitor

The application creates arbitrary shapes (circle, rectangle and triangle) and calculates their area. 

### Environment:
1. Cpp 20
2. CMake 3.22
3. Clang 13
4. MacOS

### What's included:

IShape: an interface for all shapes, has a function for the shape visitor to visit.

IShapeVisitor: an interface that has virtual visit functions for all concrete shapes. 

AreaVisitor: inherits IShape and calculates areas for any shape

Circle/Triangle/Rectangle: concrete implementations of IShape, with naive validation checks

test/test.cpp: this has tests for validity checks of the shapes and area visitor implementation.


### Next Steps:

Writing more robust test cases using an external library such as gTest.