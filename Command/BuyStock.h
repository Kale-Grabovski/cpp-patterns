#pragma once

#include "Order.h"

class BuyStock : public Order {
public:
    BuyStock(const std::shared_ptr<Stock> mStock) : Order(mStock) {}
    BuyStock() {}
    virtual void execute() const;
};
