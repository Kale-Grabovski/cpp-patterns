#pragma once

#include <string>
#include "Burger.h"

class VegBurger : public Burger {
public:
    virtual std::string name() const override;
    virtual float price() const override;
};
