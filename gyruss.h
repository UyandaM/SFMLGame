#ifndef GYRUSS_H
#define GYRUSS_H

#include<iostream>
#include <SFML/Graphics.hpp>

using namespace std;

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
