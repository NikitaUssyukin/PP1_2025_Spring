/*
Nested and infinite loops
*/

// nested

#include <iostream>

using namespace std;

int main() {

    for(int y = 0; y < 10; ++y) {
        for(int x = 0; x < 10; ++x) {
            cout << y << x << ' ';
        }
        cout << endl;
    }

    return 0;
}