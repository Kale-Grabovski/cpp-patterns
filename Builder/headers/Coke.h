#pragma once

#include <string>
#include "ColdDrink.h"

class Coke : public ColdDrink {
public:
    virtual std::string name() const override;
    virtual float price() const override;
};
