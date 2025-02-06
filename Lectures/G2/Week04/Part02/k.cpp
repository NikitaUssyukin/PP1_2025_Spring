/* 

Looping statements 
- for
- while
- do while

*/

// do while loop

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    do {
        cout << a << endl;
        --a;
    } while(a > 0);

    return 0;
}