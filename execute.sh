#!/bin/bash
g++ main.cpp gyruss.cpp logicalship.cpp -o main -std=c++14 -lsfml-graphics -lsfml-window -lsfml-system
./main
