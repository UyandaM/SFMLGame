#ifndef LOGICALSHIP_H
#define LOGICALSHIP_H
#include <iostream>
#include <memory> // required for smart pointers
#include "entity.h"

using namespace std;

using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;

class logicalship : public entity
{

public:
    logicalship(int x_limit, int y_limit);
    virtual float xposition() override;
    virtual float yposition() override;
    virtual float radius() override;
    virtual float angle() override; // give sfml degrees instead of radians
    float clockwise(); //move in clockwise motion
    float anticlockwise(); //move in anti-clockwise motion
    void kill(); //kills entity by setting its life to false
    bool isAlive(); //checks is entity is alive, in this case, the entity is the ship

private:
    /* data */
};




#endif