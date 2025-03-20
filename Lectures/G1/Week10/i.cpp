#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    string is an array of characters under the hood
    like this - char arr[size];
    */

    string s; // class basic string

    cin >> s;

    int length = s.length();

    for(int i = 0; i < length; ++i) {
        cout << s[i] << endl;
    }

    return 0;
}