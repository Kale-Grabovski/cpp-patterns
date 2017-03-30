#!/bin/sh
g++-5 -std=c++14 -g main.cpp Shape.cpp Circle.cpp Square.cpp ShapeCache.cpp && ./a.out && rm a.out
