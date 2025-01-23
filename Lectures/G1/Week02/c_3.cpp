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

    int a, b;

    cin >> a >> b;

    cout << "a before postincrement: " << a << endl;
    cout << "a++: " << a++ << endl;
    cout << "a after postincrement: " << a << endl;
    
    cout << "b before postdecrement: " << b << endl;
    cout << "b--: " << b-- << endl;
    cout << "b after postdecrement: " << b << endl;

    return 0;
}