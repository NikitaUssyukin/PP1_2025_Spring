#include <iostream>

using namespace std;

int main() {

    // compound assignment operators
    // +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=

    int a;

    a = 5;

    cout << "a before: " << a << endl;
    a -= 2; // same as: a = a - 2;
    cout << "a after: " << a << endl;

    cout << "a before: " << a << endl;
    a *= 2; // same as: a = a * 2;
    cout << "a after: " << a << endl;
    
    cout << "a before: " << a << endl;
    a /= 2; // same as: a = a / 2;
    cout << "a after: " << a << endl;

    cout << "a before: " << a << endl;
    a %= 2; // same as: a = a % 2;
    cout << "a after: " << a << endl;


    return 0;
}