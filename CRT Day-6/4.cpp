#include <iostream>
using namespace std;

class cricketers{
    public:
    string name;
    int runs;
    double avg;

    // parameterized constructor
    cricketers(string n,int r,double avg){
        name = n;
        runs = r;
        this->avg = avg;    
    }

    void show(){
        cout<<"Name: "<< name <<endl;
        cout<<"Runs: "<< runs <<endl;
        cout<<"Average: "<< avg <<endl;
    }
};

int main()
{
    cricketers c1("Riya",100,30.0);
    cricketers c2("Riya",100,30.0);
    c1.show();
    cout<< endl;
    
    c2.show();
    return 0;
}