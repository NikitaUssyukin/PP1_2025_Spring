#include <iostream>

using namespace std;


int main() {

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i] << endl;
    }

    return 0;
}

/*
i

00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/