/*Create a Sphere class that inherits from a Circle class. We know that we can create a sphere object by turning a circle around its diameter. 
a. Design an interface for a class named circle with one private data member: radius. Define a parameter constructor and a destructor for the class and write member functions to find the perimeter and area of a circle using the following relationships.
perimeter = 2 * π * radius
area = π * radius * radius


b. Define an interface file for a class named Sphere. Also define a parameter constructor and a destructor for the class and write member functions to find the surface and volume of a sphere. 
c. Define an implementation file for the class Sphere using the following formulas to find the surface and the volume of a sphere; in the formulas, perimeter is the perimeter of the circle and area is the area of the circle defined in part (b). 
surface = 2 * radius * perimeter
volume = (4 / 3) * radius * area

d. Write an application file to test the Circle and Sphere classes.*/

// Interface file for the circle class


#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;


class Circle {
    private:
           const double PI = 3.142;
           double radius;
    public:
          Circle(double r);
          ~Circle();
          // Member functions
          double getArea() const;
          double getPerimeter() const;
          double getRadius() const;
};
#endif