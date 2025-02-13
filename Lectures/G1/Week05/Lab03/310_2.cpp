#include <iostream>

using namespace std;

int main() {

    int n; // number to check
    cin >> n;

    int n1, n2, n3, n4; // digits of the number

    n1 = n / 1000;      // first digit

    n2 = n / 100 % 10;  // second digit

    n3 = n / 10 % 10;   // third digit

    n4 = n % 10;        // fourth digit

    cout << ((n1 == n4) && (n2 == n3)) << endl;

    return 0;
}