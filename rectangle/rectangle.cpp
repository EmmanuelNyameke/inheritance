// Implementation file for the rectangle class
// Constructors and Destructors
#include "rectangle.h"
Rectangle::Rectangle(double l, double w):length(l), width(w){}
Rectangle::~Rectangle(){}
// Member Functions
int Rectangle::getArea() const{
    return length * width;
}
int Rectangle::getPerimeter() const{
    return 2 * (length + width);
}
int Rectangle::getLength() const{
    return length;
}
int Rectangle::getWidth() const{
    return width;
}