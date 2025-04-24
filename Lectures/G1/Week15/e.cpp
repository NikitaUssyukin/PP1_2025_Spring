#include <iostream>
// #include <cctype> // may be needed for isalpha()

using namespace std;

int main() {

    char a;
    cin >> a;

    // next letter to char a
    // works for all letters
    // and ignores other symbols
    if(isalpha(a)) {
        if(a == 'Z' || a == 'z') {
            cout << char(a - 25) << endl;
        }
        else cout << char(a + 1) << endl;
    }
    else cout << a << endl;
    return 0;
}