#!/bin/sh
g++-5 -std=c++14 -g main.cpp Bottle.cpp Burger.cpp \
ChickenBurger.cpp Coke.cpp ColdDrink.cpp \
Meal.cpp MealBuilder.cpp Pepsi.cpp VegBurger.cpp \
Wrapper.cpp && ./a.out && rm a.out
