// Implementation file for the sphere class

#include "circle.h"
#include "sphere.h"

// Constructors and Destructors
Sphere::Sphere(double r):Circle(r){}
Sphere::~Sphere(){}


// Member functions
double Sphere::getSurface() const{
    double surface = 2 * Circle::getRadius() * Circle::getPerimeter();
    return surface;
}

double Sphere::getVolume() const{
    double volume = (4 / 3) * Circle::getRadius() * Circle::getArea();
    return volume;
}