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
    ++ increment (++a is similar to a = a + 1 then a)
    -- decrement (a-- is similar to a then a = a - 1)
    */

    int a, b;

    cin >> a >> b;

    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;
    cout << "a % b: " << a % b << endl;
    cout << "++a: " << ++a << endl;
    cout << "--b: " << --b << endl;

    return 0;
}