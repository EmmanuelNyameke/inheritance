// Application file for the classes



#include "circle.h"
#include "sphere.h"

int main(){
    // Declaring variables
    double radius;
    // Prompt and Input
    cout << "Enter the Radius: ";
    cin >> radius;
    // Instantiating the objects of the circle class
    Circle circle(radius);
    cout << "Area of a Circle: " << circle.getArea() << "cm2" << endl;
    cout << "Perimeter of a Circle: " << circle.getPerimeter() << "cm" << endl;
    // Instantiating the objects of the sphere class
    Sphere sphere(radius);
    cout << "Surface Area of a Sphere: " << sphere.getSurface() << "cm2" << endl;
    cout << "Volume of a Sphere: " << sphere.getVolume() << "cm3" << endl;
    return 0;
}