// Application file for the classes
#include "course.h"
#include "student.h"

int main(){
    // Creating Courses
    Course course1("Math", 3);
    Course course2("Physics", 4);
    Course course3("Chemistry", 3);
    // Creating a student with a dynamic array of courses
    Student student("John Doe", 3.8, 3);
    // Adding courses to the student
    student.addCourse(0, "Math", 3); 
    student.addCourse(1, "Physcs", 4); 
    student.addCourse(2, "Chemistry", 3);
    // Displaying student details
    student.display();
    return 0;
}