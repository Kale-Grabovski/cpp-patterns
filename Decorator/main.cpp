#include <memory>
#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "BlueShapeDecorator.h"

using namespace std;

int main () {
	const shared_ptr<Circle> circle(new Circle());
    const shared_ptr<Triangle> triangle(new Triangle());
    const shared_ptr<BlueShapeDecorator> blueCircle(make_shared<BlueShapeDecorator>(circle));
    const shared_ptr<BlueShapeDecorator> blueTriangle(make_shared<BlueShapeDecorator>(triangle));
    
    circle->draw();
    triangle->draw();
    blueCircle->draw();
    blueTriangle->draw();
    
    return 0;
}
