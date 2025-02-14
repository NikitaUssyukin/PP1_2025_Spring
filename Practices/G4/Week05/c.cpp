#include <iostream>

using namespace std;

int main() {

    /*
    how to get an input of variable length
    i. e.,
    input with variable amount of elements
    */

    // this program takes n integers from the input
    // and calculates their product

    int n;
    cin >> n;

    int product = 1;

    while(n > 0) {
        int x; // temporary variable
        cin >> x;
        product *= x;
        --n;
    }

    cout << product << endl;

    return 0;
}