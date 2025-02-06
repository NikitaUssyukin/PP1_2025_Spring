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

    int a = 0;

    do {
        cout << "Input a positive number:\n"; 
        cin >> a;
    } while(a <= 0);

    cout << "Resulting number:\n";
    cout << a << endl;

    return 0;
}