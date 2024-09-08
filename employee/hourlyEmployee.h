// Interface file for the hourly employee
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "employee.h"
class HourlyEmployee : public Employee {
    private:
           double wage, rate;
           int regularHours, overtimeHours;
    public:
          HourlyEmployee(string name, int employeeID, string birthDate, string hireDate, double wage, double rate, int regularHours, int overtimeHours);
          ~HourlyEmployee();
          double getWage() const;
          int getOvertime() const;
          int getRegular() const;
          double getRate() const;
};
#endif