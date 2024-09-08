// Implementation file for the course
#include "course.h"

// Constructors and Destructors
Course::Course():name(""), units(0){}
Course::Course(string name, int units):name(name), units(units){}
Course::~Course(){}

// Member functions
string Course::getName() const{
    return name;
}
int Course::getUnits() const{
    return units;
}
void Course::setName(string n){
    name = n ;
}
void Course :: setUnits(int u){
    units = u;
}
void Course::display() const {
    cout << "Name: " << name << endl; 
    cout << "Units: " << units << endl; 
}