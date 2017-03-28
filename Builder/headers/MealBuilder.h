#pragma once

#include <memory>
#include "Meal.h"

class MealBuilder {
public:
    std::shared_ptr<Meal> prepareVegMeal() const;
    std::shared_ptr<Meal> prepareNonVegMeal() const;
};
