#include <iostream>
using namespace std;

class Student {

public:
    string name;
    string rollNo;

    // Default constructor
    Student(){
        name="Riya";
        rollNo="10";
    }

    // print

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};

int main()
{
    Student s1;
    s1.show();
    return 0;
}
