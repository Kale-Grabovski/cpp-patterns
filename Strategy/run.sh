#!/bin/sh
g++-5 -std=c++14 -g main.cpp Encryption.cpp RSAAlgorithm.cpp DESAlgorithm.cpp && ./a.out && rm a.out
