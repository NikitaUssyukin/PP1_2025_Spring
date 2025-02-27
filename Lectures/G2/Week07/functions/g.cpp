#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a = 123456789;
    double b = 0.0000000000000123456789;

    cout << a << ' ' << b << endl;

    int precision;
    cin >> precision;

    cout << setprecision(precision);
    cout << a << ' ' << b << endl;

    return 0;
}