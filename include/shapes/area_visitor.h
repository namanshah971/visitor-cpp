#pragma once

#include <cmath>

#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

namespace imc::shape {

    // I could have templated the get_result part
    // to directly get the value but chose not to
    // as it seemed a bit of an overkill
    class AreaVisitor : public IShapeVisitor {
    public:
        [[nodiscard]] double get_result() const;

        void visit(const Circle &circle) override;

        void visit(const Triangle &triangle) override;

        void visit(const Rectangle &rectangle) override;


    private:
        double value_;
    };
}