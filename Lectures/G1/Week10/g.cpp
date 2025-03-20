#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    sorting/reversing strings
    */

    string s;

    cin >> s;

    // syntax: sort(s.begin() + first_index, s.
    sort(s.begin(), s.end()); // sorting the whole string

    cout << s << endl;

    return 0;
}