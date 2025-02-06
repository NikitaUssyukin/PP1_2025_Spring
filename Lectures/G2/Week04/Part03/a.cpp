/* 

Nested and infinite loops

*/

#include <iostream>

using namespace std;

int main() {

    for(int a = 1; a <= 5; ++a) {
        cout << "Value of a: " << a << endl;
        cout << "Values of b:\n";
        for(int b = 1; b <= 5; ++b) {
            cout << b << ' ';
        }
        cout << endl;
    }

    return 0;
}