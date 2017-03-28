#pragma once

#include <map>
#include <memory>
#include "Item.h"

class Meal {
private:
    std::map<std::shared_ptr<Item>, std::shared_ptr<Item>> items;
public:
	float getCost() const;
    void showItems() const;
    void add(const std::shared_ptr<Item>);
    void remove(const std::shared_ptr<Item>);
};
