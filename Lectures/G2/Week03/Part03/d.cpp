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

    cout << a++ << endl;
    cout << a << endl;

    /*
    a++ is similar to:

    a;
    a += 1;

    ++a is similar to:

    a += 1;
    a;
    */
    
    return 0;
}