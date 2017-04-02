#pragma once

#include <string>

class Stock {
public:
    Stock() : name("Zalupa"), quantity(10) {} 
    void buy() const;
    void sell() const;
private:
    std::string name;
    int quantity;
};
