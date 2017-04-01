cmake_minimum_required (VERSION 2.8)
project (Patterns)

include_directories(
    "Adapter" 
    "Bridge"
    "Builder/headers"
    "Composite"
    "Decorator"
    "Factory"
    "Obserser"
    "Prototype"
    "Strategy"
)

set(CMAKE_CXX_COMPILER /usr/bin/g++-5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -g")

file(GLOB ADAPTER_SOURCES Adapter/*.cpp)
add_executable(Adapter/Adapter ${ADAPTER_SOURCES})

file(GLOB BRIDGE_SOURCES Bridge/*.cpp)
add_executable(Bridge/Bridge ${BRIDGE_SOURCES})

file(GLOB BUILDER_SOURCES Builder/*.cpp)
add_executable(Builder/Builder ${BUILDER_SOURCES})

file(GLOB COMPOSITE_SOURCES Composite/*.cpp)
add_executable(Composite/Composite ${COMPOSITE_SOURCES})

file(GLOB DECORATOR_SOURCES Decorator/*.cpp)
add_executable(Decorator/Decorator ${DECORATOR_SOURCES})

file(GLOB FACTORY_SOURCES Factory/*.cpp)
add_executable(Factory/Factory ${FACTORY_SOURCES})

file(GLOB OBSERVER_SOURCES Observer/*.cpp)
add_executable(Observer/Observer ${OBSERVER_SOURCES})

file(GLOB PROTOTYPE_SOURCES Prototype/*.cpp)
add_executable(Prototype/Prototype ${PROTOTYPE_SOURCES})

file(GLOB STRATEGY_PATTERN Strategy/*.cpp)
add_executable(Strategy/Strategy ${STRATEGY_PATTERN})
