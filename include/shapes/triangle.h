#pragma once

#include "shape.h"

namespace imc::shape {

    class Triangle : public IShape {
    public:
        Triangle(double side1, double side2, double side3);

        [[nodiscard]] double getSide1() const;

        [[nodiscard]] double getSide2() const;

        [[nodiscard]] double getSide3() const;

        void accept(const std::shared_ptr<IShapeVisitor> &visitor) const override;

    private:
        [[nodiscard]] bool validate() const;

        double side_1_;
        double side_2_;
        double side_3_;
    };
}