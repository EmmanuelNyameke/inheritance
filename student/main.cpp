// Application file for the classes
#include "student.h"
#include "course.h"

int main(){
    // Declaring variables
    string name;
    double gpa;
    int capacity, enrolled;
    // Prompt and Input
    cout << "Students's Name: ";
    getline(cin, name);
    cout << "Student's GPA: ";
    cin >> gpa;
    cout << "Number of Students enrolled: ";
    cin >> enrolled;
    cout << "Number of Students in a Course: ";
    cin >> capacity;
    // Instantiating the objects of the student class
    Student student(name, gpa);
    // Instantiating the objects of the course class
    Course course(capacity);
    // Enrolling students in the course
    course.enrollStudent(student);
    // Printing all enrolled students
    cout << "----------------Students enrolled in the Course----------------" << endl;
    cout << "---------------------------------------------------------------" << endl;
    course.printAllStudents();
    return 0;
}