// Implementation file for the square class
// Constructor
#include "square.h"
using namespace std;
Square::Square(int side):side(side){}
// Destructor
Square::~Square(){}
// Member functions
int Square::getArea() const {
    return side * side;
}

int Square::getPeri() const {
    return 4 * side;
}

int Square::getSide() const {
    return side;
}