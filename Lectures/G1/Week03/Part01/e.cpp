#include <iostream>

using namespace std;

int main() {

    // Arithmetic operators: 
    /*

    +
    -
    *
    /
    %

    */

    cout << 2 % 3 << endl;
    cout << 3 % 2 << endl;

    // doesn't work
    // % supports only integer numbers
    // cout << 2.5 % 2.3 << endl;
    // cout << 2 % 2.7 << endl;
    // cout << 2.7 % 2 << endl;

    // undefined behaviour
    // cout << 5 % 0 << endl; 

    return 0;
}