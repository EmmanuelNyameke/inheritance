// Implementation file for the cuboid class
#include "rectangle.h"
#include "cuboid.h"
// Constructors and Destructors
Cuboid::Cuboid(double l, double w, double h):height(h), Rectangle(l, w){}
Cuboid::~Cuboid(){}
// Member function
int Cuboid::getVolume() const{
    return Rectangle::getArea() * height;
}
int Cuboid::getSurfaceArea() const{
    return 2 * (Rectangle::getArea() + (Rectangle::getLength() * height) + (Rectangle::getWidth() * height));
}