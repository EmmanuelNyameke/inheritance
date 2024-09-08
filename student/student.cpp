// Implementation file for the student class
#include "student.h"

// Constructors and Destructors
Student :: Student(string name, double gpa) : name(name), gpa(gpa) {}
Student :: ~Student(){}

// Member functions
string Student :: getName() const{
    return name;
}
double Student :: getGPA() const{
    return gpa;
}
void Student :: printInfo() const{
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
}