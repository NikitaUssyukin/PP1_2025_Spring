/* 

Looping statements 
- for
- while
- do while

*/

// break, continue keywords

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1;; ++i) {
        cout << i << ' ';
        if(i == n) {
            cout << endl;
            break;
        }
    }

    return 0;
}