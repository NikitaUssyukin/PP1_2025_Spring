#include <iostream>

using namespace std;

int main() {

    // how to take a variable amount of elements from input
    // example: a program that takes n integers
    // from the input using a for loop

    int n; // amount of elements to be received
    cin >> n;

    for(int i = 0; i < n; ++i) { // i goes from [0; n)
        int x; // temporary variable
        cin >> x;
    }

    return 0;
}