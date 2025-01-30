#include <iostream>

using namespace std;

int main() {

    // arithmetic operators: +, -, *, /, %

    cout << 1 * 2 << endl;
    cout << 1.5 * 2.1 << endl;
    cout << 1.5 * 2 << endl;
    cout << 'a' * 'b' << endl; // 97 * 98
    cout << true * true << endl; // 1 * 1

    long long a = 100000;

    int b = a * a; // overflow of int

    cout << b << endl;

    long long c = a * a;

    cout << c << endl;

    return 0;
}