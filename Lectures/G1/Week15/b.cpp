#include <iostream>

using namespace std;

int main() {

    char a;
    cin >> a;

    cout << (int) a << endl; // ASCII of char a
    // this also works
    cout << int(a) << endl;

    return 0;
}