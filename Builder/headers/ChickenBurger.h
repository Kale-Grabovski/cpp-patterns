#pragma once

#include <string>
#include "Burger.h"

class ChickenBurger : public Burger {
public:
    virtual std::string name() const override;
    virtual float price() const override;
};
