#pragma once

#include <memory>
#include "Shape.h"

class ShapeDecorator : public Shape {
protected:
    std::shared_ptr<Shape> shape;
public:
    explicit ShapeDecorator(const std::shared_ptr<Shape> mShape) : shape(mShape) {}
    virtual void draw() const = 0;
};
