// Application file for the cylinder class
#include "circle.h"
#include "cylinder.h"

int main(){
    // Declaring variables;
    double radius, height;
    // Prompt and Input
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the height: ";
    cin >> height;
    // Instantiating the objects of the cylinder class
    Cylinder cylinder(radius, height);
    cout << "Surface Area of a Cylinder: " << cylinder.getSurface() << "cm2" << endl; 
    cout << "Volume of a Cylinder: " << cylinder.getVolume() << "cm3" << endl; 
    return 0;
}