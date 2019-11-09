#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <memory> // required for smart pointers

using namespace std;

using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;

class entity
{
public:
    virtual float xposition() = 0;
    virtual float yposition() = 0;
    virtual float angle() = 0;
};

#endif //ENTITY_H