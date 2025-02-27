/*
fibonacci

n = 0
fib(n) = 0

n = 1
fib(n) = 1

n = 2
fib(n) = fib(1) + fib(0)
*/

#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if(n == 1 || n == 0) return n; // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
    // with the problem reduction
}

int main() {

    int a;

    cin >> a;

    for(int i = 0; i <= a; ++i) cout << fibonacci(i) << endl;

    return 0;
}