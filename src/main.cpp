#include <iostream>
#include "../include/shapes/circle.h"
#include "../include/shapes/area_visitor.h"

using namespace imc::shape;

int main() {
    const auto visitor = std::make_shared<AreaVisitor>();

    const double radius = 2.3;
    Circle circle{radius};
    circle.accept(visitor);

    std::cout << "Circle - radius: " << radius << std::endl;
    std::cout << "Area Calculated: " << visitor->get_result() << std::endl << std::endl;

    const double side1 = 2.2;
    const double side2 = 2.4;
    const double side3 = 3;

    Triangle triangle{side1, side2, side3};
    triangle.accept(visitor);

    std::cout << "Triangle - sided: " << side1 << ", " << side2 << ", " << side3 << std::endl;
    std::cout << "Area Calculated: " << visitor->get_result() << std::endl << std::endl;

    const double sideA = 2.1;
    const double sideB = 4.1;

    Rectangle rectangle{sideA, sideB};
    rectangle.accept(visitor);

    std::cout << "Rectangle - sided: " << sideA << ", " << sideB << std::endl;
    std::cout << "Area Calculated: " << visitor->get_result() << std::endl << std::endl;

}
