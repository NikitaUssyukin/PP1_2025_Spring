#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "parrot";

    for(int i = 0; i < s.length(); ++i) {
        cout << s[i] << " - " << int(s[i]) << endl;
    }

    return 0;
}