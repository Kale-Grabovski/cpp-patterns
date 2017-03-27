#pragma once

#include "Shape.h"

class Triangle : public Shape {
public:
	virtual void draw() const override;
};
