/*
Iteration statements (loops)
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
        ++a; // without this the loop will be infinite
    } while(a <= 10);

    return 0;
}