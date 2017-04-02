#include <iostream>
#include "Stock.h"

void Stock::buy() const {
    std::cout << "Bought " << quantity << " of " << name << "\n";
}

void Stock::sell() const {
    std::cout << "Sold " << quantity << " of " << name << "\n";
}
