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

    do {
        cout << "Input a positive number: ";
        cin >> a;
    } while(a <= 0);

    cout << "The resulting number is: " << a << endl;

    return 0;
}