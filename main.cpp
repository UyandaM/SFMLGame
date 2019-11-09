#include <iostream>
#include "gyruss.h"
#include "logicalship.h"
using namespace std;

int main()
{

    int windowLength = 1080;
    int windowBreadth = 1920;
    auto battleship = make_shared<logicalship>(windowBreadth,windowLength);
    gyruss game(windowLength,windowBreadth,battleship);

    game.run();

    return 0;
}
