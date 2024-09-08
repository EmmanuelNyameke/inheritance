// Application file for the classes
#include "rectangle.h"
#include "cuboid.h"

int main(){
    // Declaring Variables
    double length, width, height;
    // Prompting the user
    cout << "Area and Perimeter of a Rectangle" << endl;
    cout << "Enter the Length: ";
    cin >> length;
    cout << "Enter the Width: ";
    cin >> width;
    cout << "Surface Area and Volume of a Cuboid" << endl;
    cout << "Enter the Length : ";
    cin >> length;
    cout << "Enter the Width: ";
    cin >> width;
    cout << "Enter the Height: ";
    cin >> height;
    // Instantiating the Rectangle class
    Rectangle rec(length, width);
    cout << "Area of a Rectangle: " << rec.getArea() << "cm2" << endl;
    cout << "Perimeter of a Rectangle: " << rec.getPerimeter() << "cm" << endl;
    // Instantiating the Cuboid Class
    Cuboid cub(length, width, height);
    cout << "Surface Area of a Cuboid: " << cub.getSurfaceArea() << "cm2" << endl;
    cout << "Volume of a Cuboid: " << cub.getVolume() << "cm3" << endl;
    return 0;
}