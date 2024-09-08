// Implementation file for the course class
// Constructor and Destructor
#include "student.h"
#include "course.h"
Course :: Course(int capacity) : capacity(capacity), enrolled(0) {
    students = new Student[capacity];
}
Course :: ~Course(){
    delete[] students;
}

//Member Functions
bool Course :: enrollStudent(const Student& student){
    if (enrolled < capacity){
        students[enrolled++] = student;
        return true;
    }
    else {
        cout << "Course is full, cannot enroll more students." << endl;
        return false;
    }
}

void Course :: printAllStudents() const{
    for (int i = 0; i < enrolled; ++i){
        students[i].printInfo();
    }
} 
