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

    double a, b;

    cin >> a >> b;

    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;
    // cannot use % with double:
    // cout << "a % b: " << a % b << endl;
    cout << "++a: " << ++a << endl;
    cout << "b--: " << b-- << endl;

    return 0;
}