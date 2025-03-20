#include <iostream>

using namespace std;

int main() {

    /*
    IMPORTANT:
    - avoid using cin and getline together
    */

    string s1, s2;

    cin >> s1;
    getline(cin, s2);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}