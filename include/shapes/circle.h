#pragma once

#include "shape.h"

namespace imc::shape {

    class Circle : public IShape {
    public:
        explicit Circle(double radius);

        [[nodiscard]] double get_radius() const;

        ~Circle() override = default;

        void accept(const std::shared_ptr<IShapeVisitor> &visitor) const override;

    private:
        [[nodiscard]] bool validate() const;

        double radius_;
    };
}