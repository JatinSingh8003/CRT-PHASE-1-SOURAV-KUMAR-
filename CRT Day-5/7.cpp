// write a cpp program that takes number of coffee shots , return a total coffee vaalue if 1 shot is 30ml using function


#include <iostream>
using namespace std;


int coffeeVol(int shots) {
    return shots * 30;
}

int main() {
    int numShots;

    cout << "Enter the number of coffee shots: ";
    if (!(cin >> numShots)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }   

    if (numShots < 0) {
        cout << "Number of shots cannot be negative." << endl;
        return 1;
    }

    int totalVolume = coffeeVol(numShots);

    cout << "Total coffee volume for " << numShots << " shot(s) is: " << totalVolume << "ml" << endl;

    return 0;
}
