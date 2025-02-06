/*
Iteration statements (loops)
- for
- while
- do while
*/

// break, continue keywords

#include <iostream>

using namespace std;

int main() {

    // break - stops the loop entirely
    // continue - skips the current iteration of the loop
    // iteration - 1 repetition of the loop

    for(int a = 1; a <= 10; ++a) {
        if(a % 2 == 0) continue;
        cout << a << endl;
    }

    return 0;
}