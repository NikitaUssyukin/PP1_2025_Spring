#include <iostream>

using namespace std;

int main() {

    // arithmetic operators: +, -, *, /, %

    cout << 1 % 2 << endl;
    cout << 5 % 3 << endl;
    cout << 5 % 5 << endl;
    cout << 'a' % 'b' << endl; // 97 % 98
    cout << true % true << endl; // 1 % 1

    // logical error - undefined behaviour
    // in this case, causes a run-time error
    // cout << 1 % 0 << endl;

    return 0;
}