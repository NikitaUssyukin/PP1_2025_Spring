/* 

Looping statements 
- for
- while
- do while

*/

// while loop

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(a > 0) {
        cout << a % 10 << endl;
        a /= 10;
    }

    return 0;
}