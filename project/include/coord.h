#include <cstdlib>
#include <iostream>
#include <math.h>

#ifndef COORD_H
#define COORD_H

#define PI 3.14159265358979323846
#define EPSILON 0.0001

class Coord {
  private:
    float x;
    float y;
  public:
    Coord();
    Coord(float x, float y);
    Coord(unsigned int x, unsigned int y);
    unsigned int getX() const;
    unsigned int getY() const;
    float getX_f() const;
    float getY_f() const;
    void setX(float a);
    void setY(float b);
    void display() const;
    void translation(float a, float b);
    void rotation(float theta, unsigned int x0, unsigned int y0);
    void inverse_rotation(float theta, unsigned int x0, unsigned int y0);
};

#endif
