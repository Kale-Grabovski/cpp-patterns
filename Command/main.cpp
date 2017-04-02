#include <memory>
#include <iostream>
#include "Broker.h"
#include "Stock.h"
#include "BuyStock.h"
#include "SellStock.h"

using namespace std;

int main () {
    const shared_ptr<Broker> broker(new Broker());
    const shared_ptr<Stock> stock(new Stock());
    const shared_ptr<BuyStock> buyStock(new BuyStock(stock));
    const shared_ptr<SellStock> sellStock(new SellStock(stock));
    
    broker->takeOrder(buyStock);
    broker->takeOrder(sellStock);
    broker->takeOrder(buyStock);
    broker->placeOrders();

    return 0;
}
