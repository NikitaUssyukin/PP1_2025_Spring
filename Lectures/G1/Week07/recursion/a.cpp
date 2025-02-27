#include <iostream>

using namespace std;

long factorial(long n) {
    if(n == 1) return 1; // base case
    return n * factorial(n - 1); // recursive call
    // with problem reduction
}

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}