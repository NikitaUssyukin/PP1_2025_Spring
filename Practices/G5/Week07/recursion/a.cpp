/*
n! = n * (n - 1) + (n - 2) ... * 1

n = 3
n! = 3 * 2 * 1

n = 5
n! = 5 * 4 * 3 * 2 * 1

n! = n * (n - 1)!

n = 0
n! = 1

n = 1
n! = 1

n = 3
n! = 3 * 2!

n = 5
n! = 5 * 4!
*/


#include <iostream>

using namespace std;

long long factorial(int n) {
    if(n == 1) return 1; // base case
    return n * factorial(n - 1); // recursive call
    // with the problem reduction
}

int main() {

    int a;

    cin >> a;

    cout << factorial(a) << endl;

    return 0;
}