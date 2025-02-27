#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double a = 123456789;
    double b = 0.0000000123456789;
    
    int precision;
    cin >> precision;

    cout << setprecision(precision) << a << endl;
    cout << b << endl;

    cout << setprecision(6) << b << endl;

    return 0;
}