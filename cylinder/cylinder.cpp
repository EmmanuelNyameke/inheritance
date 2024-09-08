// Implementation file for the Cylinder class
#include "circle.h"
#include "cylinder.h"

// Constructor and Destructor
Cylinder::Cylinder(double r, double h) : Circle(r), height(r){}
Cylinder::~Cylinder(){}

// Member functions
double Cylinder::getSurface() const {
    return height * Circle::getPerimeter();
}

double Cylinder::getVolume() const{
    return height * Circle::getArea();
}