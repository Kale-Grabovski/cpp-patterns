#include <memory>
#include <iostream>
#include <exception>
#include "Shape.h"
#include "ShapeFactory.h"

using namespace std;

int main () {
	const shared_ptr<ShapeFactory> shapeFactory(new ShapeFactory());
    const shared_ptr<Shape> circle = shapeFactory->getShape("Circle");
    const shared_ptr<Shape> square = shapeFactory->getShape("Square");
    
    try {
        circle->draw();
        square->draw();
        // Uncomment to throw an exception
        //const shared_ptr<Shape> hz = shapeFactory->getShape("Hz");
        //hz->draw();
    } catch (std::exception& e) {
        std::cout << "All went wrong: " << e.what();
    }

    return 0;
}
