// write a cpp program similar to previous program and just add only register number in private class

#include <iostream>
using namespace std;

class Student {
private:
    static int nextRegNo;
    int regNo;

public:
    string name;

    // Constructor assigns unique registration number
    Student() {
        regNo = nextRegNo++;
    }

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData() {
        cout << "Name: " << name
             << " | Registration Number: " << regNo << endl;
    }
};

// Starting registration number
int Student::nextRegNo = 1001;

int main() {
    Student s[5];

    // Input details
    for(int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    // Display details
    cout << "\n--- Student List ---\n";

    for(int i = 0; i < 5; i++) {
        s[i].displayData();
    }

    return 0;
}