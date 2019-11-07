#include<math.h>

float degreesToRadians(float degrees)
{
    while (degrees < 0)
    {
        degrees = degrees + 360;
    }
    float radians = degrees * atan(1)/45;
    return radians;
}