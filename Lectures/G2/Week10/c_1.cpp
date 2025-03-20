#include <iostream>

using namespace std;

int main() {

    string s = "hello";

    int length = s.length();

    for(int i = 0; i < length; ++i) {
        cout << s[i] << endl;
    }

    return 0;
}