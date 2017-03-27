#!/bin/sh
g++-5 -std=c++14 -g main.cpp Triangle.cpp Circle.cpp BlueShapeDecorator.cpp && ./a.out && rm a.out
