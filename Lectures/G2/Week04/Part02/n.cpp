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

    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 1) continue; 
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}