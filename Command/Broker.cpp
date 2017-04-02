#include <memory>
#include <algorithm>
#include "Order.h"
#include "Broker.h"

void Broker::takeOrder(const std::shared_ptr<Order> order) {
    orderList.push_back(order);
}

void Broker::placeOrders() {
    std::for_each(orderList.begin(), orderList.end(), [](std::shared_ptr<Order> order) {
        order->execute();
    });

    orderList.clear();
}
