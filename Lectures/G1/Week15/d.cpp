#include <iostream>

using namespace std;

int main() {

    char a;
    cin >> a;

    // next letter to char a
    // works for for all letters
    if(a == 'Z' || a == 'z') {
        cout << char(a - 25) << endl;
    }
    else cout << char(a + 1) << endl;

    return 0;
}