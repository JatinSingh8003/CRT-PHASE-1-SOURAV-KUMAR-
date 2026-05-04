// write a cpp program to print a '*' pattern in the form of vertical rectange where i=5 and j=4

#include<iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r >>c;
    for (int i=1; i<r; i++) {
        for (int j=1 ; j<c; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
