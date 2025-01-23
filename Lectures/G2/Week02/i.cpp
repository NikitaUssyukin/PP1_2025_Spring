#include <iostream>

using namespace std;

int main() {

    // input/output using cin/cout
    
    int a, b, c;
    char d;
    double e;

    // taking multiple pieces of data from input
    cin >> a >> b >> c >> d >> e;
    // this also works:
    /*
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    */

    // sending multiple pieces of data to the output
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
    // this also works:
    /*
    cout << a << ' ';
    cout << b << ' ';
    cout << c << ' ';
    cout << d << ' ';
    cout << e << endl;
    */

    return 0;
}