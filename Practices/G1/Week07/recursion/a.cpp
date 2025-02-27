#include <iostream>

using namespace std;

long long factorial(int n) {
    if(n == 1) return 1; // base case
    return n * factorial(n - 1); // recursive call
    // with problem reduction
}

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) cout << factorial(i) << endl;

    return 0;
}