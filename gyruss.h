#ifndef GYRUSS_H
#define GYRUSS_H

#include<iostream>
#include <SFML/Graphics.hpp>
#include <memory> // required for smart pointers

using namespace std;
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;
class gyruss
{
    public:
        gyruss(int windowLength,int windowBreadth);
        void run();

    private:
      int windowLength;
      int windowBreadth;
      float xOrigin;
      float yOrigin;

};

#endif // GYRUSS_H
