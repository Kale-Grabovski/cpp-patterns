#include <memory>
#include "ShapeCache.h"

int main () {
    std::shared_ptr<ShapeCache> shapeCache(new ShapeCache());

    shapeCache->getShape(1)->draw();
    shapeCache->getShape(2)->draw();

    return 0;
}
