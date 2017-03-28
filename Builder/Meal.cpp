#include <map>
#include <memory>
#include <iostream>
#include "headers/Item.h"
#include "headers/Meal.h"

using namespace std;

void Meal::add(const shared_ptr<Item> element) {
    items[element] = element;
}

void Meal::remove(const shared_ptr<Item> element) {
    items.erase(element);
}

float Meal::getCost() const {
    float sum = 0;

    for (map<shared_ptr<Item>, shared_ptr<Item>>::const_iterator itr = items.begin(), 
        end = items.end(); itr != end; ++itr ) {
        sum += itr->first->price();
    }

    return sum;
}

void Meal::showItems() const {
    for (map<shared_ptr<Item>, shared_ptr<Item>>::const_iterator itr = items.begin(), 
        end = items.end(); itr != end; ++itr ) {
        cout << itr->first->name() 
            << ", packing: " << itr->first->packing()->getPack()
            << ", price: " << itr->first->price() << "\n";
    }
}
