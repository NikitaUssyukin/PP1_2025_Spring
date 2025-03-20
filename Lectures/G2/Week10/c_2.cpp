#include <iostream>

using namespace std;



int main() {

    char s[] = "hello";

    int length = s.length();
    // s.length() and s.size

    for(int i = 0; i < length; ++i) {
        cout << s[i] << endl;
    }

    return 0;
}