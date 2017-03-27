#include <string>
#include <memory>
#include <stdexcept>
#include "Circle.h"
#include "Square.h"
#include "ShapeFactory.h"


std::shared_ptr<Shape> ShapeFactory::getShape(const std::string& shape) const {
    if (shape == "Circle") {
        return std::make_shared<Circle>();
    } else if (shape == "Square") {
        return std::make_shared<Square>();
    }

    throw std::invalid_argument("Cant find appropriate object");
}
