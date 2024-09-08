/*Creating a simple employee class that supports two classifications of employees, salaried and hourly. All employees have four data members: name, employee number, birth date, and date hired. Salaried employees have a monthly salary and an annual bonus, which is stated as a percentage in the range of 0 to 10 percent. Hourly employees have an hourly wage and an overtime rate which ranges from 50 to 100 percent.*/

// Interface file for the Employee class

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
    private:
            string name, birthDate, hireDate;
            int employeeID;
    public:
           Employee(string name, int employeeID, string birthDate, string hireDate);
           ~Employee();
           string getName() const;
           int getID() const;
           string getBirthDate() const;
           string getHireDate() const;
};
#endif