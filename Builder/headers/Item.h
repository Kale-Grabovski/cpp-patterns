#pragma once

#include <string>
#include <memory>
#include "Packing.h"

class Item {
public:
    virtual std::string name() const = 0;
    virtual float price() const = 0;
    virtual std::shared_ptr<Packing> packing() const = 0;
};
