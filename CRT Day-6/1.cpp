// class className{

//     public:/ private:/ protected:

//      Data Member
//      Member plan
// }

// write a cpp program to create a student class and add student details in it using OOP

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string rollNo;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayData() {
        cout << "\nName: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
