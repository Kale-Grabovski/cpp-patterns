#include <map>
#include <memory>
#include <iostream>
#include "Graphic.h"
#include "CompositeGraphic.h"

using namespace std;

void CompositeGraphic::add(const shared_ptr<Graphic> element) {
    childGraphics[element] = element;
}

void CompositeGraphic::remove(const shared_ptr<Graphic> element) {
    childGraphics.erase(element);
}

void CompositeGraphic::print() const {
    cout << "Composite: " << name << ":\n";

    for (map<shared_ptr<Graphic>, shared_ptr<Graphic>>::const_iterator itr = childGraphics.begin(), 
        end = childGraphics.end(); itr != end; ++itr ) {
        itr->first->print();
    }
}
