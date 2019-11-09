#ifndef GYRUSS_H
#define GYRUSS_H

#include<iostream>
#include <SFML/Graphics.hpp>
#include <memory> // required for smart pointers
#include "logicalship.h"

using namespace std;
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;
class gyruss
{
    public:
        gyruss(int windowBreadth, int windowLength, shared_ptr<logicalship> &battleship);
        void run();

    private:
      int windowLength;
      int windowBreadth;
      shared_ptr<logicalship> battleship;

};

#endif // GYRUSS_H
