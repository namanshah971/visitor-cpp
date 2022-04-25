#include "../include/shapes/area_visitor.h"
using namespace imc::shape;

void AreaVisitor::visit(const Circle &circle) {
    value_ = pow(circle.get_radius(), 2) * M_PI;
}

void AreaVisitor::visit(const Triangle &triangle) {
    const auto semi_perimeter = (triangle.getSide1() + triangle.getSide2() + triangle.getSide3()) / 2;

    value_ = sqrt(semi_perimeter * (semi_perimeter - triangle.getSide1()) * (semi_perimeter - triangle.getSide2()) *
                  (semi_perimeter - triangle.getSide3()));
}

void AreaVisitor::visit(const Rectangle &rectangle) {
    value_ = rectangle.getSide1() * rectangle.getSide2();
}

double AreaVisitor::get_result() const {
    return value_;
}
