#include <iostream>

using namespace std;

int main() {

    int x;
    cin >> x;

    int cnt = 0;

    while(x != 0) {
        if(x % 2 != 0) ++cnt;
        x /= 2;
    }

    cout << cnt << endl;

    return 0;
}