// Application file for the classes
#include "employee.h"
#include "hourlyEmployee.h"
#include "salaryEmployee.h"
#include <string>

int main(){
    // Declaring Variables
    string name, birthDate, hireDate;
    double salary, bonus, wage, rate;
    int employeeID, regularHours, overtimeHours;
    // Prompt and Input
    cout << "Employee's Name: ";
    getline(cin, name);
    cout << "Employee's ID: ";
    cin >> employeeID;
    cout << "Employee's Date of Birth: ";
    cin >> birthDate;
    cout << "Employee's Hired Date: ";
    cin >> hireDate;
    cout << "Employee's Salary: ";
    cin >> salary;
    cout << "Employee's Bonus (in percentage): ";
    cin >> bonus;
    cout << "Employee's wage per hour: ";
    cin >> wage;
    cout << "Employee's Rate(%): ";
    cin >> rate;
    cout << "Regular hour(s) of the Employee: ";
    cin >> regularHours;
    cout << "Overtime hour(s): ";
    cin >> overtimeHours;
    // Instantiating the objects of the Employee class
    Employee employee(name, employeeID, birthDate, hireDate);
    cout << "\t\tEmployee's Information" << endl;
    cout << "\t\t-------------------------------------------" << endl;
    cout << "Employee's Name: " << employee.getName() << endl;
    cout << "Employee's ID: " << employee.getID() << endl;
    cout << "Employee's Date of Birth: " << employee.getBirthDate() << endl;
    cout << "Employee's Hired Date: " << employee.getHireDate() << endl;
    cout << "\t\t---------------------------------------------" << endl;
    cout << "\t\t---------------------------------------------" << endl;
    cout << "\t\t---------------------------------------------" << endl;
    // Instantiating the objects of the salary employee class
    SalaryEmployee salaryEmployee(name, employeeID, birthDate, hireDate, salary, bonus);
    cout << "\t\tEmployee's Payment" << endl;
    cout << "\t\t-------------------------------------" << endl;
    cout << "Employee's Salary: " << "GHC" << salaryEmployee.getSalary() << endl;
    cout << "Employee's Bonus: " << "GHC" << salaryEmployee.getBonus() << endl;
    cout << "\t\t-------------------------------------" << endl;
    // Instantiating the objects of the hourly employee class
    HourlyEmployee hourlyEmployee(name, employeeID, birthDate, hireDate, wage, rate, regularHours, overtimeHours);
    cout << "\t\tHourly Employee's Information" << endl;
    cout << "\t\t-------------------------------------------" << endl;
    cout << "Employee's Name: " << hourlyEmployee.getName() << endl;
    cout << "Employee's ID: " << hourlyEmployee.getID() << endl;
    cout << "Employee's Date of Birth: " << hourlyEmployee.getBirthDate() << endl;
    cout << "Employee's Hired Date: " << hourlyEmployee.getHireDate() << endl;
    cout << "Employee's Regular hour(s): " << hourlyEmployee.getRegular() << endl;
    cout << "Employee's Wage: " << hourlyEmployee.getWage() << endl;
    cout << "Employee's Overtime hour(s): " << hourlyEmployee.getOvertime() << endl;
    cout << "Employee's rate: " << hourlyEmployee.getRate() << endl;
    return 0;
}