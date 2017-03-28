#pragma once

#include <string>
#include <memory>
#include "Item.h"

class ColdDrink : public Item {
public:
    virtual std::shared_ptr<Packing> packing() const override;
};
