#include <iostream>
#include "BlueShapeDecorator.h"

void BlueShapeDecorator::draw() const {
    shape->draw();
    setBlueBorder();
}

void BlueShapeDecorator::setBlueBorder() const {
    std::cout << "Blue border\n";
}
