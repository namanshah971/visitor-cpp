#include "../include/shapes/triangle.h"
using namespace imc::shape;

Triangle::Triangle(double side1, double side2, double side3) : side_1_(side1), side_2_(side2), side_3_(side3) {
    if (!validate()) {
        throw std::invalid_argument("not valid sides for a triangle");
    }
}

double Triangle::getSide1() const {
    return side_1_;
}

double Triangle::getSide2() const {
    return side_2_;
}

double Triangle::getSide3() const {
    return side_3_;
}

bool Triangle::validate() const {
    return side_1_ > 0 && side_2_ > 0 && side_3_ > 0 && side_1_ + side_2_ > side_3_ && side_1_ + side_3_ > side_2_ &&
           side_2_ + side_3_ > side_1_;
}

void Triangle::accept(const std::shared_ptr<IShapeVisitor> &visitor) const {
    visitor->visit(*this);
}



