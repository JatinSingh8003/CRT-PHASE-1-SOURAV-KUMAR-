// write a program that takes an integer as an input from the user, print all the nuber between 1 to n i.e divisible by 2


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers divisible by 2 from 1 to " << n << " are: " << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}