// write a cpp program that continuously takes positive integer as an input from the user and add them to running sum variable if the user enters a negative number immediately terminate the loop using break statement and print the final sum  


#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> num;

        if (num < 0) {
            break; 
        }

        sum += num;
    }

    cout << "Final sum is : " << sum;

    return 0;
}