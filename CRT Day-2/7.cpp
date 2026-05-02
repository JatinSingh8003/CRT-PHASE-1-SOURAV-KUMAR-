// write a cpp program that take a student percentage 0 to 100 as input and calculate their grades based on the following 
// 1. 90-100 (grade A)
// 2. 80-89  (grade B)
// 3. 70-79  (grade C)
// 4. 60-69  (grade D)
// 5. below 60 fail


#include <iostream>
using namespace std;

int main() {
    int percentage;

    cout << "Enter percentage (0-100): ";
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade A";
    }
    else if (percentage >= 80 && percentage <= 89) {
        cout << "Grade B";
    }
    else if (percentage >= 70 && percentage <= 79) {
        cout << "Grade C";
    }
    else if (percentage >= 60 && percentage <= 69) {
        cout << "Grade D";
    }
    else if (percentage >= 0 && percentage < 60) {
        cout << "Fail";
    }
    else {
        cout << "Invalid percentage";
    }

    return 0;
}