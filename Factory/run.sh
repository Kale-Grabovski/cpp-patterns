#!/bin/sh
g++-5 -std=c++14 -g main.cpp Circle.cpp Square.cpp ShapeFactory.cpp && ./a.out && rm a.out
