#include <iostream>
#include <algorithm>

using namespace std;

void decToHex(int n) {

    string res = "";

    while(n > 0) {
        int rem = n % 16;
        n /= 16;

        if(rem >= 10) {
            res += char('A' + rem - 10);
        }
        else res += char('0' + rem);
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}

int main() {

    int N;
    cin >> N;

    decToHex(N);

    return 0;
}