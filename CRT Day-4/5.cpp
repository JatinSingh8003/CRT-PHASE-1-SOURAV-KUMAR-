//write a cpp program to print a hollow right angled triangle and take input from the user.


#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
   
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Print star at first position, last position, or last row
            if (j == 1 || j == i || i == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
