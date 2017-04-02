#pragma once

#include "Order.h"

class SellStock : public Order {
public:
    SellStock(const std::shared_ptr<Stock> mStock) : Order(mStock) {}
    SellStock() {}
    virtual void execute() const;
};
