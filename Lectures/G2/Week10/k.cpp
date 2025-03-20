#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "parrot";

    // syntax: sort(s.begin() + first_index, s.begin() + last_index + 1)
    sort(s.begin() + 1, s.begin() + 4 + 1); // sorts the part of the string

    cout << s << endl;

    return 0;
}