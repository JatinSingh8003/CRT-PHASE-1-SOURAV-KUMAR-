// write a function that apply 10% discount using references. Print the updated bill.


#include <iostream>
using namespace std;

// Function using reference
void applyDiscount(float &bill) {
    bill = bill - (bill * 0.10); // apply 10% discount
}

int main() {
    float amount;

    cout << "Enter bill amount: ";
    cin >> amount;
    cout << "Discount: " << amount * 0.10 << endl;

    applyDiscount(amount); // passing by reference

    cout << "Updated bill after 10% discount: " << amount;

    return 0;
}