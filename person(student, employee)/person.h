/*Writing a program that simulates the three classes defined as shown below:
                               Person
       Student                                            Employee
a. Use name as the only data member for the Person class.
b. Use name and gpa as data members for the Student class.
c. Use name and salary as data members for the Employee class.*/

/***************************************************************
* The interface file to define the Person class
*
***************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
// Definition of Person class
class Person
{
private:
string name;
public:
Person (string nme);
~Person();
void print () const;
}
;
#endif