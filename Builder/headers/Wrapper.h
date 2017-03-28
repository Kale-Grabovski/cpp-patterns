#pragma once

#include <string>
#include "Packing.h"

class Wrapper : public Packing {
public:
    virtual std::string getPack() const override;
};
