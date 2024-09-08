// Interface file for the cubic class
#ifndef CUBIC_H
#define CUBIC_H
#include "square.h"
class Cube : public Square {
    // Constructors and Destructors
    public:
    Cube(int side);
    ~Cube();
    // Member functions
    int getArea() const;
    int getVolume() const;
};
#endif