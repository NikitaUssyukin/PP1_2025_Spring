#include <iostream>

using namespace std;

int main() {

    // from decimal to binary
    // binary result is reversed

    int n;
    cin >> n;

    while(n != 0) {
        cout << n % 2;
        n /= 2;
    }

}