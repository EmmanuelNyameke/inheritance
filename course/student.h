// Interface file for the student class

#ifndef STUDENT_H
#define STUDENT_H
#include "course.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
           string name;
           double gpa;
           Course* course;
           int numCourses;
    public:
          Student();
          Student(string name, double gpa, int numCourses);
          ~Student();
          string getName() const;
          double getGpa() const;
          int getNumCourses() const;
          void addCourse(int index, string courseName, int courseUnits);
          void display() const;
};
#endif