#include <iostream>

using namespace std;

int main() {

    // increment and decrement: ++ and --
    /*
    ++a - preincrement
    a++ - postincrement
    --a - predecrement
    a-- - postdecrement
    */

    int a = 5;
    double b = 2.5;

    cout << ++a << endl;
    cout << ++b << endl;
    // error example:
    // cout << ++2 << endl;

    cout << --a << endl;
    cout << --b << endl;
    
    return 0;
}