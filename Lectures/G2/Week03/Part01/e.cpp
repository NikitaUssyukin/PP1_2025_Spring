#include <iostream>

using namespace std;

int main() {

    // arithmetic operators: +, -, *, /, %

    cout << 1 / 2 << endl;
    cout << 1.5 / 2.1 << endl;
    cout << 1.5 / 2 << endl;
    cout << 2 / 1.5 << endl;
    cout << 'a' / 'b' << endl; // 97 / 98
    cout << true / true << endl; // 1 / 1

    // logical error - undefined behaviour
    // in this case, causes a run-time error
    // cout << 1 / 0 << endl;

    return 0;
}