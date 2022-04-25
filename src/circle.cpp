#include "../include/shapes/circle.h"
using namespace imc::shape;


Circle::Circle(double radius) : radius_(radius) {
    if (!validate()) {
        throw std::invalid_argument("radius should be greater or equal to 0");
    }
}

double Circle::get_radius() const {
    return radius_;
}

void Circle::accept(const std::shared_ptr<IShapeVisitor> &visitor) const {
    visitor->visit(*this);
}

bool Circle::validate() const {
    return radius_ >= 0;
}

