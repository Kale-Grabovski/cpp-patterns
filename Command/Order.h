#pragma once

#include <memory>
#include "Stock.h"

class Order {
public:
    Order(const std::shared_ptr<Stock> mStock) : stock(mStock) {}
    Order() {}
    virtual void execute() const = 0;
protected:
    std::shared_ptr<Stock> stock;
};
