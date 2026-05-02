// write a cpp program that takws person age as a input if the age is 18 and above then print eligible to vote

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote";
    } else {
        cout << "Not eligible to vote";
    }

    return 0;
}