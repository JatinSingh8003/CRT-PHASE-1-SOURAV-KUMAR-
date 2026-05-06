// make a class area in that class find area for square, rectangle, circle using parameterized constructor and use constructor overloading also give default if no area is to be found give zero by user input

#include <iostream>
using namespace std;

class Area {
public:
    // Default constructor
    Area() {
        cout << "Area = 0" << endl;
    }

    // Square
    Area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    // Rectangle
    Area(int length, int breadth) {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    // Circle
    Area(float radius) {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    int choice;

    cout << "1. Square\n2. Rectangle\n3. Circle\n4. No Area\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if(choice == 1) {
        int side;
        cout << "Enter Side: ";
        cin >> side;
        Area a(side);
    }

    else if(choice == 2) {
        int l, b;
        cout << "Enter Length and Breadth: ";
        cin >> l >> b;
        Area a(l, b);
    }

    else if(choice == 3) {
        float r;
        cout << "Enter Radius: ";
        cin >> r;
        Area a(r);
    }

    else {
        Area a;
    }

    return 0;
}