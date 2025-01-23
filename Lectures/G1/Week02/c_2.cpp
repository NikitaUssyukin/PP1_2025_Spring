#include <iostream>

using namespace std;

int main() {

    // Operators, arithmetic

    /*
    ++ increment
    -- decrement
    */

    int a, b;

    cin >> a >> b;

    cout << "a before increment: " << a << endl;
    cout << "++a: " << ++a << endl;
    cout << "a after increment: " << a << endl;
    
    cout << "b before decrement: " << b << endl;
    cout << "--b: " << --b << endl;
    cout << "b after decrement: " << b << endl;

    return 0;
}