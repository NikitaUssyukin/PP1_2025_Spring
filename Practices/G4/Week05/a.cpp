#include <iostream>

using namespace std;

int main() {

    /*
    how to get an input of variable length
    i. e.,
    input with variable amount of elements
    */

    // this program takes n integers from the input

    int n;
    cin >> n;

    while(n > 0) {
        int x; // temporary variable
        cin >> x;
        --n;
    }

    return 0;
}