#include <iostream>

using namespace std;

int main() {

    // take decimal number
    // and output its binary representation in reverse

    int n;
    cin >> n;

    while(n > 0) {
        cout << n % 2; // output each bit
        n /= 2;
    }
    cout << endl;

    return 0;
}