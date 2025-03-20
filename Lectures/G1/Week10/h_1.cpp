#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    sorting/reversing strings
    */

    string s;

    cin >> s;

    // syntax: sort(s.begin() + first_index, s.begin() + last_index + 1)
    sort(s.begin(), s.begin() + s.size()); // sorting the whole string

    cout << s << endl;

    return 0;
}