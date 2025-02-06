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

    for(int b = a; b <= 5; ++b) {
        cout << b << endl;
    }
    
    return 0;
}