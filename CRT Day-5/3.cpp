// write a cpp program to add two number with argument and with return type 


#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = add(x, y);

    cout << "Sum = " << result;

    return 0;
}