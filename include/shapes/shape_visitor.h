#pragma once

namespace imc::shape {
    class Circle;
    class Triangle;
    class Rectangle;

    struct IShapeVisitor {
        virtual void visit(const Circle &) = 0;

        virtual void visit(const Triangle &) = 0;

        virtual void visit(const Rectangle &) = 0;

        virtual ~IShapeVisitor() = default;
    };
}



