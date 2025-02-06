/*
Iteration statements (loops)
- for
- while
- do while
*/

// for loop

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    // empty initialization
    for(; a <= 5; ++a) {
        cout << a << endl;
    }
    
    return 0;
}