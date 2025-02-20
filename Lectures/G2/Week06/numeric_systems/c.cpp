#include <iostream>

using namespace std;

int main() {

    // analysis of the decimal number
    // e.g. counting the amount of 1-digits
    // (counting the "ones")

    int n;
    cin >> n;

    int cnt = 0;

    while(n > 0) {
        if(n % 10 == 1) ++cnt;
        n /= 10;
    }

    cout << cnt << endl;

    return 0;
}