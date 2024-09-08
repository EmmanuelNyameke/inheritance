// Implementation file for the cubic class
#include "square.h"
#include "cubic.h"
// Constructors and Destructors
Cube::Cube(int side):Square(side){}
Cube::~Cube(){}
// Member Functions
int Cube::getArea() const {
    return 6 * Square::getArea();
}
int Cube::getVolume() const{
    return side * side * side;
}