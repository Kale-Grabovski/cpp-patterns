#include "headers/ColdDrink.h"
#include "headers/Bottle.h"

std::shared_ptr<Packing> ColdDrink::packing() const {
    return std::make_shared<Bottle>();
}
