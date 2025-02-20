#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt = 0;

    // counting zeros in a decimal number
    while(n > 0) {
        if(n % 10 == 0) ++cnt;
        n /= 10;
    }
    cout << cnt << endl;

    return 0;
}