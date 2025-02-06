/*
Nested and infinite loops
*/

// infinite

#include <iostream>

using namespace std;

int main() {

    int a = 1;

    while(true) {
        cout << a << endl;
        ++a;
    }

    // Ctrl + C to stop

    return 0;
}