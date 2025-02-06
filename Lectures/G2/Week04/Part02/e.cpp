/* 

Looping statements 
- for
- while
- do while

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int a = 1, b = n; a <= n && b >= 1; ++a, --b) {
        cout << a << ' ' << b << endl;
    }

    return 0;
}