/* 

Nested and infinite loops

*/

#include <iostream>

using namespace std;

int main() {

    for(int y = 0; y <= 9; ++y) {
        for(int x = 0; x <= 9; ++x) {
            cout << x  << y << ' ';
        }
        cout << endl;
    }

    return 0;
}