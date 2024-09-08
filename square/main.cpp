#include "square.h"
#include "cubic.h"

int main(){
    int side;
    // Prompting the user
    cout << "Enter the length: ";
    cin >> side;
    // Instantiating the square class
    Square square(side);
    cout << "The area of the square is " << square.getArea() << "cm2" << endl;
    cout << "The perimeter of the square is " << square.getPeri() << "cm" << endl;
    // Instantiating the cube class
    Cube cube(side);
    cout << "The area of the cube is " << cube.getArea() << "cm2" << endl;
    cout << "The volume of the cube is " << cube.getVolume() << "cm" << endl;
    return 0;
}