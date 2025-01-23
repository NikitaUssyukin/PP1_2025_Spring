#include <iostream>

using namespace std;

int main() {

    // Operators, arithmetic

    /*
    +  addition
    -  subtraction
    *  multiplication
    /  division
    %  modulus (remainder of the division)
    */

    char a, b;

    // char is an unsigned integer under the hood
    // unsigned - nonnegative
    // the integer represents the code - ASCII code of the character
    // each character has its own unique integer - its ASCII code

    cin >> a >> b;

    // taking the above info into account
    // below the operations are performed using ASCII codes of the characters
    // stored in variables a and b
    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;
    cout << "a % b: " << a % b << endl;
    cout << "++a: " << ++a << endl;
    cout << "b--: " << b-- << endl;

    return 0;
}