// Implementation file for the hourly employee

#include "employee.h"
#include "hourlyEmployee.h"

// Constructors and Destructors
HourlyEmployee::HourlyEmployee(string name, int employeeID, string birthDate, string hireDate, double wage, double rate, int regularHours, int overtimeHours):Employee(name, employeeID, birthDate, hireDate), wage(wage), regularHours(regularHours), overtimeHours(overtimeHours), rate(rate){}
HourlyEmployee::~HourlyEmployee(){}

// Member functions
double HourlyEmployee::getWage() const{
    return wage;
}
int HourlyEmployee::getRegular() const{
    return regularHours;
}
int HourlyEmployee::getOvertime() const {
    return overtimeHours;
}
double HourlyEmployee::getRate() const{
    double rate = (overtimeHours / regularHours) * 100;
    return rate;
}
