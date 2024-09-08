// Implementation file for the student class

#include "student.h"
#include "course.h"

// Constructors and Destructors
Student::Student():name(""), gpa(0.0), course(nullptr), numCourses(0){}
Student::Student(string name, double gpa, int numCourses):name(name), gpa(gpa), numCourses(numCourses){
    course = new Course[numCourses];
}
Student::~Student(){
    delete[] course;
}

// Member Functions
string Student::getName() const {
    return name;
}
double Student::getGpa() const {
    return gpa;
}
int Student::getNumCourses() const {
    return numCourses;
}
// Function to add courses
void Student:: addCourse(int index, string courseName, int courseUnits) {
    if (index >= 0 && index < numCourses) {
        course[index].setName(courseName);
        course[index].setUnits(courseUnits);
    }
}
// Function to display student details
void Student::display() const {
    cout << "Student's Name: " << name << ", GPA: " << gpa << endl;
    cout << "Courses Taken:" << endl;
    for (int i = 0; i < numCourses; ++i) {
        course[i].display();
    }
}