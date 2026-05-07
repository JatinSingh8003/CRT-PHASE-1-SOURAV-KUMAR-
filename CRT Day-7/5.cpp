//Hierarchial Inheritance
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

class Cricketer : public Player{
    public:
    int runs;
    void setruns(int r){
        runs = r;
    }
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Runs: " << runs << endl;
    }
};

class Footballer: public Player{
    public:
    int goals;
    void setgoals(int g){
        goals = g;
    }
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Goals: " << goals << endl;
    }
};


int main(){
    Cricketer c1;
    c1.setName("Mahi");
    c1.setruns(15500);
    c1.show();

    Footballer f1;
    f1.setName("Messi");
    f1.setgoals(700);
    f1.show();
    return 0;
}