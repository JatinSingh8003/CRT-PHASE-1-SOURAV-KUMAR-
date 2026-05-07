//Multiple Inheritance
#include <iostream>
using namespace std;


class Player{
    public:
    string name;
    int age;
    void setName(string n){
        name = n;
    }
};

//Derived class or child class of Player class
//Parent class or Base Class of Indian Cricketer class

class Cricketer{
    public:
    int runs;
    void setruns(int r){
        runs = r;
    }
};

class IndianCricketer : public Cricketer, public Player{
    public:
    string state;
    void setstate(string s){
        state = s;
    }

    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Runs: " << runs << endl;
        cout <<"State: " << state << endl;
    }
};

int main(){
    int r;
    cout<<"Enter runs: ";
    cin>>r;
    string s;
    cout<<"Enter State: ";
    cin>>s;
    IndianCricketer c1;
    c1.setName("Mahi");
    c1.setruns(r);
    c1.setstate(s);
    c1.show();

    return 0;
}