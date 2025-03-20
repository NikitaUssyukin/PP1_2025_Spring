#include <iostream>

using namespace std;


int main() {

    string s;
    cin >> s;

    int lowercase_cnt = 0;
    int uppercase_cnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if('A' <= s[i] && s[i] <= 'Z') uppercase_cnt++;
        else if('a' <= s[i] && s[i] <= 'z') lowercase_cnt++;
    }

    cout << lowercase_cnt << ' ' << uppercase_cnt << endl;

    return 0;
}