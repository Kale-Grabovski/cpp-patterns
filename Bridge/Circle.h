#pragma once

#include <memory>
#include "Shape.h"
#include "DrawApi.h"

class Circle : public Shape {
private:
	int radius, x, y;

public:
	Circle(int mRadius, int mX, int mY, std::shared_ptr<DrawApi> mDrawApi) 
		: radius(mRadius), x(mX), y(mY), Shape(mDrawApi) {}
	void draw() override;
};
