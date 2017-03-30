#include <iostream>
#include "Square.h"

std::shared_ptr<Shape> Square::clone() const {
    return std::make_shared<Square>(*this);
}

void Square::draw() const {
    std::cout << "Draw the square\n";
}
