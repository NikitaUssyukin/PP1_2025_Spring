/*
Nested and infinite loops
*/

// nested

#include <iostream>

using namespace std;

int main() {

    for(int a = 1; a <= 3; ++a) {
        cout << "value of a: " << a << endl;
        cout << "values of b: ";
        for(int b = 1; b <= 10; ++b) {
            cout << b << ' ';
        }
        cout << endl;
    }

    return 0;
}