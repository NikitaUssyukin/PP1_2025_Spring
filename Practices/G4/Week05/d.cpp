#include <iostream>

using namespace std;

int main() {

    /*
    how to get an input of variable length
    i. e.,
    input with variable amount of elements
    */

    // this program takes n integers from the input
    // now using for

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
    }

    return 0;
}