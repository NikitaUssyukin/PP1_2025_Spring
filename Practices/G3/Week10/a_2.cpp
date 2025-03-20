#include <iostream>

using namespace std;


int main() {

    /*
    the program takes a string s
    and outputs this string with all the characters,
    except for lowercase letters, removed
    */

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if('a' <= s[i] && s[i] <= 'z') cout << s[i];
    }

    return 0;
}