#include <memory>
#include <iostream>
#include "Shape.h"
#include "ShapeFactory.h"

using namespace std;

int main () {
    const shared_ptr<ShapeFactory> shapeFactory(new ShapeFactory());
    
    try {
        const shared_ptr<Shape> circle = shapeFactory->getShape("Circle");
        const shared_ptr<Shape> square = shapeFactory->getShape("Square");
        //const shared_ptr<Shape> hz = shapeFactory->getShape("Hz");

        circle->draw();
        square->draw();
        //hz->draw();
    } catch (std::exception& e) {
        cout << "All went wrong: " << e.what() << "\n";
    }

    return 0;
}
