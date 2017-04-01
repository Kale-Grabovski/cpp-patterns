#pragma once

#include <memory>
#include "Shape.h"
#include "DrawApi.h"

class Circle : public Shape {
public:
	Circle(int mRadius, int mX, int mY, std::shared_ptr<DrawApi> mDrawApi) 
		: Shape(mDrawApi), radius(mRadius), x(mX), y(mY) {}
    Circle() {}
	void draw() override;
private:
    int radius, x, y;
};
