#include <iostream>

using namespace std;

int main() {

    // assignment operator

    int a = 5;

    // error:
    // 5 = 5;

    int b, c, d;

    b = c = d = a;

    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;

    return 0;
}