#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // take decimal number
    // and output its binary representation in reverse

    int n;
    cin >> n;

    cout << (n ^ 511) << endl;

    return 0;
}