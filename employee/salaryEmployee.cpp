// Implementation file for the salary employee
#include "employee.h"
#include "salaryEmployee.h"

// Constructors and Destructors
SalaryEmployee::SalaryEmployee(string name, int employeeID, string birthDate, string hireDate, double salary, double bonus):Employee(name, employeeID, birthDate, hireDate), salary(salary), bonus(bonus){}
SalaryEmployee::~SalaryEmployee(){}

// Member functions
double SalaryEmployee::getSalary() const{
    return salary;
}
double SalaryEmployee::getBonus() const{
    return salary * bonus;
}