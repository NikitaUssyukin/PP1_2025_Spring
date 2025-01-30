#include <iostream>

using namespace std;

int main() {

    // increment ++, decrement --
    
    /* 
    ++a - preincrement
    a++ - postincrement
    --a - predecrement
    a-- - postdecrement
    */

    /*
    preincrement, logic:
    a += 1;
    a;

    postincrement logic:
    a;
    a += 1;
    */

    int a = 5;

    cout << ++a << endl; 
    cout << a << endl; 

    return 0;
}