#pragma once

#include <list>
#include <memory>
#include "Order.h"

class Broker {
public:
    void takeOrder(const std::shared_ptr<Order>);
    void placeOrders();
private:
    std::list<std::shared_ptr<Order>> orderList;
};
