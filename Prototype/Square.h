#pragma once

#include "Shape.h"

class Square : public Shape {
public:
    virtual std::shared_ptr<Shape> clone() const override;
	virtual void draw() const override;
};
