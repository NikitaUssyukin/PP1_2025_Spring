/*
Nested and infinite loops
*/

// infinite

#include <iostream>

using namespace std;

int main() {

    int a = 1;

    for(;;++a) {
        cout << a << endl;
    }

    // Ctrl + C to stop

    return 0;
}