/*Design a class named Rectangle with two private data members: length and width. Define constructors and a destructor for the class and write member functions 
to find the perimeter and area of a rectangle. Then define a class named Cuboid (representing a box) that inherits from the class Rectangle with an extra data member: height. Then write constructors and a destructor for the Cuboid class, and write member functions to find the surface and volume of the Cuboid objects*/

// Interface file for the rectangle class

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
    private:
    // Data members
           double length;
           double width;
    public:
    // Constructors and Destructors
          Rectangle(double l, double w);
          ~Rectangle();
    // Member Functions
          int getArea() const;
          int getPerimeter() const;
          int getLength() const;
          int getWidth() const;
};
#endif