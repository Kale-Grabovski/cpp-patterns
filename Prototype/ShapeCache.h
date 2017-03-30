#pragma once

#include <map>
#include <memory>
#include "Shape.h"

class ShapeCache {
private:
	std::map<int, std::shared_ptr<Shape>> shapeMap;
public:
    ShapeCache();
    virtual ~ShapeCache() {}
	std::shared_ptr<Shape> getShape(int);
    void loadShapes();
};
