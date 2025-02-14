#include <iostream>

using namespace std;

int main() {

    // how to take a variable amount of elements from input
    // example: a program that takes n integers
    // from the input using while loop

    int n; // amount of elements to be received
    cin >> n;

    while(n > 0) { // n goes from [n; 0)

        int x; // temporary variable
        cin >> x;

        --n;
    }

    return 0;
}