#include <memory>
#include "Graphic.h"
#include "Ellipse.h"
#include "Square.h"
#include "CompositeGraphic.h"

using namespace std;

int main () {
    const shared_ptr<Graphic> ellipse(new Ellipse("1"));
    const shared_ptr<Graphic> ellipse2(new Ellipse("2"));
    const shared_ptr<Graphic> square(new Square("1"));
    const shared_ptr<Graphic> square2(new Square("2"));
    const shared_ptr<CompositeGraphic> composite(new CompositeGraphic("Main"));
    const shared_ptr<CompositeGraphic> composite2(new CompositeGraphic("1"));
    const shared_ptr<CompositeGraphic> composite3(new CompositeGraphic("2"));

    composite2->add(ellipse);
    composite2->add(square);
    composite3->add(ellipse2);
    composite3->add(square2);

    composite->add(composite2);
    composite->add(composite3);
    composite->print();
    
    return 0;
}
