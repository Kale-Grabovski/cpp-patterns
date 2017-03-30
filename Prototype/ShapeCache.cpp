#include <map>
#include <memory>
#include "ShapeCache.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

ShapeCache::ShapeCache() {
    loadShapes();
}

void ShapeCache::loadShapes() {
    std::shared_ptr<Shape> circle(new Circle());
    circle->setId(1);
    shapeMap[1] = circle;

    std::shared_ptr<Shape> square(new Square());
    square->setId(2);
    shapeMap[2] = square;
}

std::shared_ptr<Shape> ShapeCache::getShape(int shapeId) {
    return shapeMap[shapeId]->clone();
}
