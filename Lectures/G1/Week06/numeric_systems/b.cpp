#include <iostream>

using namespace std;

int main() {

    // from decimal to hex
    // hex result is reversed

    int n;
    cin >> n;

    while(n != 0) {
        int rem = n % 16;
        if(rem < 10) {
            cout << rem;
        }
        else {
            cout << char('A' + rem - 10);
        }
        n /= 16;
    }

}