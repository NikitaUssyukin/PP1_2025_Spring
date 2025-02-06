/* 

Nested and infinite loops

*/

#include <iostream>

using namespace std;

int main() {

    for(int a = 1; a <= 5; ++a) {
        for(int b = 1; b <= 5; ++b) {
            cout << "Value of a: " << a << endl;
            cout << "Value of b: " << b << endl;
        }
    }

    return 0;
}