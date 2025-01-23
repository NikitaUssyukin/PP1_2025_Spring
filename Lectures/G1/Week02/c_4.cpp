#include <iostream>

using namespace std;

int main() {

    // Operators, arithmetic

    /*
    ++ increment
    -- decrement
    */

    /*
    pre- and post- variants
    ++a  preincrement
    a++  postincrement
    --a  predecrement
    a--  postdecrement
    */

    int a = 1; 
    int b = 1;

    a++;
    ++a;
    
    b--;

    cout << a-- + ++b << endl;

    cout << a << ' ' << b << endl;
    
    return 0;
}