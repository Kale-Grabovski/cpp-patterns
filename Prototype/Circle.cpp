#include <iostream>
#include "Shape.h"
#include "Circle.h"

std::shared_ptr<Shape> Circle::clone() const {
    return std::make_shared<Circle>(*this);
}

void Circle::draw() const {
    std::cout << "Draw the circle\n";
}
