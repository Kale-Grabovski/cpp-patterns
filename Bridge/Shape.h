#pragma once

#include <memory>

class DrawApi;

class Shape
{
protected:
	std::shared_ptr<DrawApi> drawApi;
public:
	virtual void draw() = 0;
	Shape(std::shared_ptr<DrawApi> mDrawApi) : drawApi(mDrawApi) {}
};
