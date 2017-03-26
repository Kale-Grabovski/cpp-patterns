#!/bin/sh
g++-5 -std=c++14 -g main.cpp WeatherData.cpp CurrentConditions.cpp SmsInform.cpp && ./a.out && rm a.out
