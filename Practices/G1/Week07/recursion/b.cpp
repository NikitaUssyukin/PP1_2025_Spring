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

    for(int i = 1; i <= n; ++i) cout << fibonacci(i) << endl;

    return 0;
}