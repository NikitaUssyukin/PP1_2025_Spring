#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int idx = 0;

    while(n > 0) {
        if(n % 2) break;
        ++idx;
        n /= 2;
    }
    cout << idx << endl;

    return 0;
}