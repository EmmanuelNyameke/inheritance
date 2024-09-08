// Interface file for the course class
#ifndef COURSE_H
#define COURSE_H
#include "student.h"

class Course {
    private:
           int capacity;
           int enrolled;
           Student* students;
    public:
          Course(int capacity);
          ~Course();
          bool enrollStudent(const Student& student);
          void printAllStudents() const;
};
#endif