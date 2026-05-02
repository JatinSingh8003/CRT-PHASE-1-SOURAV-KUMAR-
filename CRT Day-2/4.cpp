// write a cpp program that takes two integer as an input from the user find the maximum of two using  turnary conditional operator


#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;

    cout << "Maximum value is: " << max;

    return 0;
}

