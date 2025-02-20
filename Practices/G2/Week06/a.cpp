#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // take decimal number
    // and output its binary representation in reverse

    int n;
    cin >> n;

    int res = 0;
    int idx = 0;

    while(n > 0) {
        res += !(n % 2) * pow(2, idx); // output each bit
        idx++;
        n /= 2;
    }
    cout << res << endl;

    return 0;
}