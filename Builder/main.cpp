#include <iostream>
#include <memory>
#include "headers/MealBuilder.h"

int main () {
	std::shared_ptr<MealBuilder> mealBuilder(std::make_shared<MealBuilder>());

	std::shared_ptr<Meal> vegMeal = mealBuilder->prepareVegMeal();
    std::shared_ptr<Meal> meatMeal = mealBuilder->prepareNonVegMeal();

    std::cout << "Veg meal:\n";
    vegMeal->showItems();
    std::cout << "Total cost: " << vegMeal->getCost() << "\n\n";

    std::cout << "Meat meal:\n";
    meatMeal->showItems();
    std::cout << "Total cost: " << meatMeal->getCost() << "\n";
    
    return 0;
}
