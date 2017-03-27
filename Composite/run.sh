#!/bin/sh
g++-5 -std=c++14 -g main.cpp CompositeGraphic.cpp Ellipse.cpp Square.cpp && ./a.out && rm a.out
