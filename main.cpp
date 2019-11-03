#include <iostream>
#include "gyruss.h"

using namespace std;

int main()
{

    int windowLength = 1920;
    int windowBreadth = 1080;
    gyruss game(windowLength,windowBreadth);

    game.run();

    return 0;
}
