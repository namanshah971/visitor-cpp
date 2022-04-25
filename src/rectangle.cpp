#include "../include/shapes/rectangle.h"
using namespace imc::shape;

Rectangle::Rectangle(double side1, double side2) : side_1_(side1), side_2_(side2) {
    if (!validate()) {
        throw std::invalid_argument("sides should be greater than 0");
    }
}

double Rectangle::getSide1() const{
    return side_1_;
}

double Rectangle::getSide2() const{
    return side_2_;
}

void Rectangle::accept(const std::shared_ptr<IShapeVisitor> &visitor) const  {
    visitor->visit(*this);
}

bool Rectangle::validate() const {
    return side_1_ > 0 && side_2_ > 0;
}
