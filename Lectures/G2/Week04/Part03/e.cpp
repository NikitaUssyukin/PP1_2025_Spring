/* 

Nested and infinite loops

*/

#include <iostream>

using namespace std;

int main() {

    int a = 1;

    while(true) {
        cout << ++a << endl;
    }

    // Ctrl + C to stop the program

    return 0;
}