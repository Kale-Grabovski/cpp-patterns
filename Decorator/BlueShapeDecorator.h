#pragma once

#include <memory>
#include "ShapeDecorator.h"

class BlueShapeDecorator : public ShapeDecorator {
public:
    explicit BlueShapeDecorator(const std::shared_ptr<Shape> mShape) : ShapeDecorator(mShape) {}
    virtual void draw() const override;
    void setBlueBorder() const;
};
