#include <memory>
#include "RedCircle.h"
#include "GreenCircle.h"
#include "Circle.h"

int main () {
	Circle redCircle(1, 2, 5, std::make_shared<RedCircle>());
	Circle greenCircle(6, 8, 9, std::make_shared<GreenCircle>());
	
	redCircle.draw();
	greenCircle.draw();
}
