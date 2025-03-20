#include <iostream>

using namespace std;



int main() {

    char c[] = "hello"; // creates a null-terminated C-style string
    // c now ends with \n

    int length = sizeof(c); 
    // sizeof() returns the size in bytes, not the amount of elements
    // because char has only 1 byte, we can omit the division

    // cout << length;
    // length is 6 because a newline character (\n) was added to the end

    for(int i = 0; i < length; ++i) {
        cout << "--------" << endl;
        cout << c[i] << endl;
        cout << "--------" << endl;
    }

    return 0;
}