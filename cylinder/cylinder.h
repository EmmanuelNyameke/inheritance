/*Create a Cylinder class that inherits from a Circle class. We know that we can create a cylinder object by adding a height to the circle object. 
a. Design an interface for a class named circle as done in the circle folder. 
b. Define an interface file for a class named Cylinder. Also define a parameter constructor and a destructor for the class, and write member functions to find the surface and volume of a cylinder. 
c. Define an implementation file for the class Cylinder using the following formulas to find the surface and the volume of a cylinder; in these formulas, perimeter is the perimeter of the circle and area is the area of the circle defined in circle folder.
surface = height * perimeter
volume = height * area
d. Write an application file to test the Circle and Cylinder class.*/


/*Note: This folder (i.e Cylinder) is inheriting from Circle but I am not going to define the circle class because I have already define it in the folder named circle. 
In order to avoid the repetition of the code, I have included "circle.h" as the header file*/



// Interface file for the cylinder class
#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h" // Circle class isn't defined in tis folder but rather the folder named Circle.

class Cylinder : public Circle{
    private:
           double height;
    public:
          Cylinder(double r, double h);
          ~Cylinder();
          double getSurface() const;
          double getVolume() const;
};
#endif