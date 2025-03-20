#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    string is an array of characters under the hood
    like this - char arr[size];
    */

    char s[] = "hello\n";
    // null-terminated C-style string
    // aka
    // const char string

    int length = 0;

    for(int i = 0;; ++i) {
        cout << s[i] << endl;
        if (s[i] == '\n') {
            length = i;
            break;
        }
    }

    cout << length << endl;

    return 0;
}