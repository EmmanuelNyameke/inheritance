// Implementation file for the circle class

#include "circle.h"

// Constructors and Destructors
Circle::Circle(double r):radius(r){}
Circle::~Circle(){}

// Member functions
double Circle::getArea() const{
    double area = PI * radius * radius;
    return area;
}

double Circle::getPerimeter() const{
    double perimeter = 2 * PI * radius;
    return perimeter;
}

double Circle::getRadius() const{
    return radius;
}