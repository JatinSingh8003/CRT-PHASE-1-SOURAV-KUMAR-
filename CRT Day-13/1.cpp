// sum of digits

#include<iostream>
using namespace std;

int sumofDigits(int x)
{
    //Base Case
    if(x==0)
        return 0;
    return (x % 10) + sumofDigits(x / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum of Digits of " << n << " is : " << sumofDigits(n) << endl;
    return 0;
}