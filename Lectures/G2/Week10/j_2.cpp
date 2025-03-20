#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "parrot";

    sort(s.begin(), s.begin() + s.length()); // sorts the whole string

    cout << s << endl;

    return 0;
}