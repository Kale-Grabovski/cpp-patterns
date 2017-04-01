cmake_minimum_required (VERSION 2.8)
project (BuilderPattern)

include_directories("${PROJECT_BINARY_DIR}/headers")

set(CMAKE_CXX_COMPILER /usr/bin/g++-5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -g")

add_executable(BuilderPattern main.cpp Bottle.cpp Burger.cpp 
ChickenBurger.cpp Coke.cpp ColdDrink.cpp 
Meal.cpp MealBuilder.cpp Pepsi.cpp VegBurger.cpp 
Wrapper.cpp)

