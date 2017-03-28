#pragma once

#include <string>
#include "Packing.h"

class Bottle : public Packing {
public:
    virtual std::string getPack() const override;
};