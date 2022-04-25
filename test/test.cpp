#include "../include/shapes/circle.h"
#include "../include/shapes/triangle.h"
#include "../include/shapes/rectangle.h"
#include "../include/shapes/area_visitor.h"

void test_circle_fail() {

    bool exception_thrown{false};
    try {
        imc::shape::Circle circle{-2};
    }
    catch (const std::invalid_argument &) {
        exception_thrown = true;
    }
    assert(exception_thrown);
}

void test_triangle_fail() {

    bool exception_thrown{false};
    try {
        imc::shape::Triangle triangle{1, 1, 3};
    }
    catch (const std::invalid_argument &) {
        exception_thrown = true;
    }
    assert(exception_thrown);
}

void test_rectangle_fail() {

    bool exception_thrown{false};
    try {
        imc::shape::Rectangle rectangle{1, 0};
    }
    catch (const std::invalid_argument &) {
        exception_thrown = true;
    }
    assert(exception_thrown);
}

void test_area_visitor() {
    const double EPSILON{0.00001};
    const auto visitor = std::make_shared<imc::shape::AreaVisitor>();

    imc::shape::Circle circle{1};
    circle.accept(visitor);
    assert(abs(visitor->get_result() - M_PI) < EPSILON);

    imc::shape::Triangle triangle{4, 5, 3};
    triangle.accept(visitor);
    assert(abs(visitor->get_result() - 6) < EPSILON);

    imc::shape::Rectangle rectangle{4, 2};
    rectangle.accept(visitor);
    assert(abs(visitor->get_result() - 8) < EPSILON);
}

int main() {
    test_circle_fail();
    test_triangle_fail();
    test_rectangle_fail();
    test_area_visitor();
    return 0;
}