#include <iostream>

using namespace std;

int main() {

    /*
    how to get an input of variable length
    i. e.,
    input with variable amount of elements
    */

    // this program takes n integers from the input
    // and calculates their sum

    int n;
    cin >> n;

    int sum = 0;

    while(n > 0) {
        int x; // temporary variable
        cin >> x;
        sum += x;
        --n;
    }

    cout << sum << endl;

    return 0;
}