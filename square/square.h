/*Designing a class name Square that defines a square geometric shape. The class must have a data member named side that defines the length of each side. Then define two member functions, getPeri and getArea, to find the perimeter and area of the square shape. Now define a Cube that defines a cubic shape and inherits from the Square class. The class Cube needs no new data members, but it needs the member functions getArea and getVolume. Provide the appropriate constructors and destructors for both classes.*/

// Interface file for the square class

#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;
class Square {
    // Data Member
    protected:
           int side;
    public:
    // Constructor and destructor
          Square(int side);
          ~Square();
          // Member functions
          int getPeri() const;
          int getArea() const;
          int getSide() const;
};
#endif