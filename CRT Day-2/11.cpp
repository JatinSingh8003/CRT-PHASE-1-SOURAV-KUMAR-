// write a cpp program that simulate the ATM withdrawal system the program should save as a input from the user and determine the transaction is valid or not
// 1. 0 nhi hona chahiye 
// 2.  do not cross limit of transctions
// 3. amount isn't sufficient


#include <iostream>
using namespace std;

int main() {
    int balance = 10000;     // initial balance
    int withdraw;
    int limit = 5000;        // max withdrawal limit per transaction

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    // 1. Amount should not be 0 or negative
    if (withdraw <= 0) {
        cout << "Invalid amount! Amount must be greater than 0.";
    }
    // 2. Should not cross transaction limit
    else if (withdraw > limit) {
        cout << "Transaction limit exceeded! Max allowed is " << limit;
    }
    // 3. Check sufficient balance
    else if (withdraw > balance) {
        cout << "Insufficient balance!";
    }
    else {
        balance -= withdraw;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: " << balance;
    }

    return 0;
}