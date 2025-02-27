#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double a = 123456789;
    double b = 0.0000000123456789;
    
    int precision;
    cin >> precision;

    cout.precision(4);

    cout << a << endl;
    cout << b << endl;

    cout.precision(6);

    cout << b << endl;

    return 0;
}