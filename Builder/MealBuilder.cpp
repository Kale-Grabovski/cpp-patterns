#include <memory>
#include "headers/Meal.h"
#include "headers/Coke.h"
#include "headers/Pepsi.h"
#include "headers/VegBurger.h"
#include "headers/ChickenBurger.h"
#include "headers/MealBuilder.h"

std::shared_ptr<Meal> MealBuilder::prepareNonVegMeal() const {
    std::shared_ptr<Meal> meal(new Meal());
    meal->add(std::make_shared<ChickenBurger>());
    meal->add(std::make_shared<Coke>());
    return meal;
}

std::shared_ptr<Meal> MealBuilder::prepareVegMeal() const {
    std::shared_ptr<Meal> meal(new Meal());
    meal->add(std::make_shared<VegBurger>());
    meal->add(std::make_shared<Pepsi>());
    return meal;
}
