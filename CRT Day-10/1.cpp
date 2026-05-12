#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "Jecrc";

    // methods of string

    // 1 length of string
    int n = str1.length();
    cout << "Length of string is: " << n << endl;
    
    // 2 append string
    cout << "After appending string is: " << str1.append("Students") << endl;
    
    // 3 EMPTY STRING
    cout << "Is Empty String"<< str2.empty()<<endl;
    
    // 4 concatenate of string
    cout << "After concatenating of string is: " << str1+ "Bacho" << endl;
    cout << "After concatenating of string is 2: " << str1 << endl;

    // 5 push_back() method
    str2.push_back('U');
    cout << "After push_back() method: " << str2 << endl;  //JecrcU
    
    // 6 pop_back() method
    str2.pop_back();
    cout << "After pop_back() method: " << str2 << endl;  //Jecrc 

    // 7 find() method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1 is: " << index << endl;

    // 8 swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2: " << endl;
    cout << "str1: " << str1 << endl;   // Jecrc
    cout << "str2: " << str2 << endl;   // Hello students
    
    // 9 substr() method
    string subStr = str2.substr(5, 6);   //5 is index and 6 is total length of substring
    cout << "Substring of str2 from index 5 with length 6: " << subStr << endl;

    // 10 getline() method
    string str3;
    //  cin>> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;
}