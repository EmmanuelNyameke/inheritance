/*Designing a class named Course with two data members: name and units. Then design a class named Student with three data members: name, gpa, and a list of courses taken. The list must be implemented as an array in heap memory. Create constructors, destructor, and all necessary member functions for the operation of the Course and Student class. Test both classes in an application program.*/

// Interface file for the course class
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
using namespace std;

class Course {
    private:
           string name;
           int units;
    public:
          Course();
          Course(string name, int units);
          ~Course();
          string getName() const;
          int getUnits() const;
          void setName(string n);
          void setUnits(int u);
          void display() const;
};
#endif