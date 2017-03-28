#pragma once

#include <string>
#include <memory>
#include "Item.h"

class Burger : public Item {
public:
    virtual std::shared_ptr<Packing> packing() const override;
};
