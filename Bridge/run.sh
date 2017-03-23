#!/bin/sh
g++-5 -std=c++14 -g main.cpp RedCircle.cpp GreenCircle.cpp Circle.cpp && ./a.out && rm a.out
