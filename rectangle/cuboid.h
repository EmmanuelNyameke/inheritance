// Interface file for the cuboid class
#ifndef CUBOID_H
#define CUBOID_H
#include "rectangle.h"

class Cuboid : public Rectangle {
    private:
           double height;
    public:
    // Constructors and Destructors
          Cuboid(double l, double w, double h);
          ~Cuboid();
    // Member Functions
          int getSurfaceArea() const;
          int getVolume() const;
};
#endif