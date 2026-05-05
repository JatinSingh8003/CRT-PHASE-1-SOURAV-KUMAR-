// write a function that takes length and width as a input, return and print the area of rectangle

#include <iostream>
using namespace std;

int areaRectangle(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int area = areaRectangle(length, width);

    cout << "Area of rectangle = " << area;

    return 0;
}