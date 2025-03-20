#include <iostream>
#include <cstring> // for strlen()

using namespace std;

int main() {

    char c[] = "hello"; // creates a null-terminated C-style string
    // c now ends with \0

    int length = strlen(c); 
    // strlen() counts the character up to the null character (\0)

    // cout << length << endl;
    // length is 5 because a null character (\0) was not counted

    for(int i = 0; i < length; ++i) {
        cout << "--------" << endl;
        cout << c[i] << endl;
        cout << "--------" << endl;
    }

    return 0;
}