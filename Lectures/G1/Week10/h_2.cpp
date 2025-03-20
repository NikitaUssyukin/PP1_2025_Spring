#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    sorting/reversing strings
    */

    string s;

    cin >> s;

    int first_index, last_index;
    cin >> first_index >> last_index;

    // syntax: sort(s.begin() + first_index, s.begin() + last_index + 1)
    sort(s.begin() + first_index, s.begin() + last_index + 1);

    cout << s << endl;

    return 0;
}