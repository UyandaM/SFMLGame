#include "logicalship.h"

logicalship::logicalship(int x_limit, int y_limit)
{
  this->x_limit = x_limit;
  this->y_limit = y_limit;
  x_centre = this->x_limit/3.25;
  y_centre = this->y_limit/2.5;
  radians = 0;
  degrees = 0;
  radius = 0.1*this->x_centre;
  x_position = x_centre - radius*sin(0);
  y_position = y_centre + radius*cos(0);
}


 float logicalship::xposition()
{
  degreesToRadians();
  x_position = x_centre - radius*sin(radians);
  return x_position;
}

float logicalship::yposition()
{
  degreesToRadians();
  y_position = y_centre + radius*cos(radians);
  return y_position;
}

//returns angle in degrees
float logicalship::angle()
{
  return degrees;
}



void logicalship::clockwise()
{
  degrees = degrees + 1;
  if (degrees >= 360)
  {
    degrees = degrees - 360;
  }
}

void logicalship::anticlockwise()
{
  degrees = degrees - 1;
  if(degrees < 0)
  {
    degrees = degrees + 360;
  }
}

float logicalship::degreesToRadians()
{
  radians = degrees*atan(1)/45;
  return radians;
}
