#include <memory>
#include "RedCircle.h"
#include "GreenCircle.h"
#include "Circle.h"

int main () {
	std::shared_ptr<DrawApi> rc = std::make_shared<RedCircle>();
	Circle redCircle(1, 2, 1, rc);
	redCircle.draw();

	std::shared_ptr<DrawApi> gc = std::make_shared<GreenCircle>();
	Circle greenCircle(6, 8, 9, gc);
	greenCircle.draw();
}
