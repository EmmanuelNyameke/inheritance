// Implementation file for the employee class
// Constructors and Destructors
#include "employee.h"
Employee::Employee(string name, int employeeID, string birthDate, string hireDate):name(name), employeeID(employeeID), birthDate(birthDate), hireDate(hireDate){}
Employee::~Employee(){}

// Member functions
string Employee::getName() const{
    return name;
}
int Employee::getID() const{
    return employeeID;
}
string Employee::getBirthDate() const{
    return birthDate;
}
string Employee::getHireDate() const{
    return hireDate;
};