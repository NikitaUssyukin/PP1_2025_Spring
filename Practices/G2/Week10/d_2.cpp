#include <iostream>

using namespace std;

int main() {

    /*
    IMPORTANT:
    - avoid using cin and getline together
    */

    string s;
    int a;

    getline(cin, s);
    cin >> a;

    cout << s << endl;
    cout << a << endl;

    return 0;
}