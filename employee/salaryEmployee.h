// Interface file for the salaried employee
#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "employee.h"

class SalaryEmployee : public Employee{
    private:
           double salary, bonus;
    public:
          SalaryEmployee(string name, int employeeID, string birthDate, string hireDate, double salary, double bonus);
          ~SalaryEmployee();
          double getSalary() const;
          double getBonus() const;
};
#endif