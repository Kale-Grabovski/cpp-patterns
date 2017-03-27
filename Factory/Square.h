#pragma once

#include "Shape.h"

class Square : public Shape {
public:
    virtual void draw() const override;
};
