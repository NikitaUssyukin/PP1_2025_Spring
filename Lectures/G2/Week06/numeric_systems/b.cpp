#include <iostream>

using namespace std;

int main() {

    // take decimal number
    // and output its hex representation in reverse

    int n;
    cin >> n;

    while(n > 0) {
        int remainder = n % 16;
        if(remainder < 10) {
            cout << remainder;
        }
        else {
            cout << char('A' + remainder - 10);
            // ASCII code of 'A' is taken
            // and used in the expression
        }
        n /= 16;
    }
    cout << endl;

    return 0;
}