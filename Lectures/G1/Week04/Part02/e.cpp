/*
Iteration statements (loops)
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

    while(a <= 10) {
        cout << a << endl;
        ++a; // without this the loop will be infinite
    }

    return 0;
}