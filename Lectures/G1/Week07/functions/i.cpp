#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int precision;
    cin >> precision;

    cout << setprecision(precision) << M_PI << endl;

    return 0;
}