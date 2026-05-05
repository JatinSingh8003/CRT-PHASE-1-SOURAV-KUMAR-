// write a function with default argument and calling it with or without parameter


// #include <iostream>
// using namespace std;

// int add(int a, int b = 0) {
//     return a + b;
// }

// int main() {
//     cout << "add(2, 3) = " << add(2, 3) << endl;
//     cout << "add(2) = " << add(2) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Function with default arguments
int add(int a = 10, int b = 20) {
    return a + b;
}

int main() {

    // Call without arguments → uses default values (10 + 20)
    cout << "Without arguments: " << add() << endl;

    // Call with one argument → a = 5, b = default (20)
    cout << "One argument: " << add(5) << endl;

    // Call with two arguments → overrides both defaults
    cout << "Two arguments: " << add(5, 3) << endl;

    return 0;
}
