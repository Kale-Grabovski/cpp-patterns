#pragma once

#include <string>
#include <memory>
#include "Shape.h"

class ShapeFactory {
public:
    virtual std::shared_ptr<Shape> getShape(const std::string&) const;
};
