#include <iostream>

using namespace std;

int main() {

    /*
    at() provides checked access
    Example:
    */

    string s;

    cin >> s;

    // obviously incorrect index
    cout << s.at(-1) << endl;

    return 0;
}