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

    int a = 1;
    int b = 1;

    cout << ++a + b++ << endl;
    
    a++;
    ++b;

    cout << a-- << endl;

    cout << a-- + ++b << endl;
    
    return 0;
}