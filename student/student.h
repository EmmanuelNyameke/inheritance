/*Designing a class named Student with two data members: name and gpa. Then define a class named Course whose data member capacity holds the number of students in the course and an array of students created in heap memory. The Student class must have a member function to print information about the student object. The Course class must have information about enrolling students in the course and must print information about all students enrolled. */
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
           string name;
           double gpa;
    public:
          Student(string name = "", double gpa = 0.0);
          ~Student();
          string getName() const;
          double getGPA() const;
          void printInfo() const;
};
#endif