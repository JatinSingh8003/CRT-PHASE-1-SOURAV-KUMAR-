// write a cpp that simulates simple customer support system using switch case statement in that menu option are: 1 for support, 2 for billing, 3 for technical support and 4 or 0 for agent support.


#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== Customer Support Menu =====" << endl;
    cout << "1. General Support" << endl;
    cout << "2. Billing" << endl;
    cout << "3. Technical Support" << endl;
    cout << "4 or 0. Talk to Agent" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected General Support.";
            break;
        case 2:
            cout << "You selected Billing Support.";
            break;
        case 3:
            cout << "You selected Technical Support.";
            break;
        case 4:
        case 0:
            cout << "Connecting you to an Agent...";
            break;
        default:
            cout << "Invalid choice. Please try again.";
    }

    return 0;
}