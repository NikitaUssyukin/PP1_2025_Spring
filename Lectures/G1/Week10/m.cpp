#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    getting ascii codes of elements
    */

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); ++i) {
        cout << s[i] << " - " << int(s[i]) << endl;
    }

    return 0;
}