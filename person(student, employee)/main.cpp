// Application file
#include "person.h"
#include "employee.h"
#include "student.h"

int main() {
    // Declaring variables
    string name;
    double gpa, salary;
    // Prompt and input for the person's class
    cout << "Enter the name of the Person: ";
    getline(cin, name);
    // Instantiating the objects of the person's class
    Person person(name);
    person.print();
    // Prompt and Input for the Student's class
    cout << "Enter the Student's Name: ";
    getline(cin, name);
    cout << "Enter the Student's GPA: ";
    cin >> gpa;
    // Instantiating the object of the student's class
    Student student(name, gpa);
    student.print();
    // Prompt and Input for the Employee's class
    cout << "Enter Employee's Name: ";
    getline(cin, name);
    cout << "Enter Employee's Salary: ";
    cin >> salary;
    // Instantiating the object of the Employee's class
    Employee employee(name, salary);
    employee.print();
    return 0;
}