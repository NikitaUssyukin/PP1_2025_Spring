#include <iostream>

using namespace std;

int main() {

    // compound assignment operators: +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=

    int a = 5;
    cout << a << endl;

    a += 2; // same as: a = a + 2
    cout << a << endl;

    a -= 2; // same as: a = a - 2
    cout << a << endl;

    a *= 2; // same as: a = a * 2
    cout << a << endl;
    
    a /= 2; // same as: a = a / 2
    cout << a << endl;

    a %= 2; // same as: a = a % 2
    cout << a << endl;

    return 0;
}