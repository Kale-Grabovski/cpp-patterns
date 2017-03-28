#include "headers/Burger.h"
#include "headers/Wrapper.h"

std::shared_ptr<Packing> Burger::packing() const {
    return std::make_shared<Wrapper>();
}
