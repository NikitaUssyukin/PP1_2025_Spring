/* 

Nested and infinite loops

*/

#include <iostream>

using namespace std;

int main() {

    int a = 1;

    for(;;) {
        cout << ++a << endl;
    }

    // Ctrl + C to stop the program

    return 0;
}