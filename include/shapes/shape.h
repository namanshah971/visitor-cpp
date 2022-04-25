#pragma once
#include <memory>
#include "shape_visitor.h"

namespace imc::shape{
    struct IShape {
        // using shared_ptr instead of raw
        // for shared ownership
        virtual void accept(const std::shared_ptr<IShapeVisitor> &visitor) const = 0;

        virtual ~IShape() = default;
    };
}


