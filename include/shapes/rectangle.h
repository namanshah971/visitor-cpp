#pragma once

#include "shape.h"

namespace imc::shape {

    class Rectangle : public IShape {
    public:
        Rectangle(double side1, double side2);

        [[nodiscard]] double getSide1() const;

        [[nodiscard]] double getSide2() const;

        void accept(const std::shared_ptr<IShapeVisitor> &visitor) const override;

    private:
        [[nodiscard]] bool validate() const;

        double side_1_;
        double side_2_;
    };
}