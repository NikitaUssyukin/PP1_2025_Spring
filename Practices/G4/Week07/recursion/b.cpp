/*
fib(0) = 0
fib(1) = 1
fib(n) = fib(n - 1) + fib(n - 2)

base case
n = 0 or n = 1

problem reduction with each recursive call
fib(n - 1) + fib(n - 2)
*/


#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if(n == 0 || n == 1) return n; // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
    // with the problem reduction
}

int main() {

    int a;

    cin >> a;

    for(int i = 0; i <= a; ++i) {
        cout << fibonacci(i) << endl;
    }

    return 0;
}