//copy constructor
#include<iostream>
using namespace std;

class Criketers{
    public:

    //data members
    string name;
    int runs;
    double avg;
    
    //parameterized constructor
    Criketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->avg = avg;
    }

    //Copy constructor
    Criketers(const Criketers &c){
        this->name = c.name;
        this->runs = c.runs;
        this->avg = c.avg;
    }

    //Member function
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Runs: " << runs << endl;
        cout <<"Average: " << avg << endl;
    }
};

int main(){

    Criketers c1("Mahi", 5500, 45.4);
    c1.show();
    
    //creating an object using copy constructor
    Criketers c2(c1);
    c2.show();

    return 0;
}