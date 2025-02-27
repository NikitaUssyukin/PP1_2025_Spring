/*
fib(0) = 0
fib(1) = 1
fib(2) = fib(1) + fib(0)
*/


#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if(n == 0 || n == 1) return n; // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
    // with problem reduction
}

int main() {

    int n;
    cin >> n;

    for(int i = 0; i <= n; ++i) cout << fibonacci(i) << endl;

    return 0;
}