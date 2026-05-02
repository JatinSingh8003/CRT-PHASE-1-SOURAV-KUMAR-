// write a cpp program that take an inteeger input that represent a person age use an else if ladder to determine and print.
// 1. eligible to vote if a is 100 and more in category
// 2. eligible to vote if age is 18 to 99
// 3. not eligible to vote if age is 0 to 17 and invalid age is negative.


#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    }
    else if (age >= 100) {
        cout << "Eligible to vote (100 and above category)";
    }
    else if (age >= 18 && age <= 99) {
        cout << "Eligible to vote (18 to 99)";
    }
    else if (age >= 0 && age <= 17) {
        cout << "Not eligible to vote";
    }

    return 0;
}