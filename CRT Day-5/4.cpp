// write a cpp program to add two numbers with argument and without return type

#include <iostream>
using namespace std;


void add(int a, int b) {
    int sum = a + b;
    cout << "Sum = " << sum;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    add(x, y);  

    return 0;
}