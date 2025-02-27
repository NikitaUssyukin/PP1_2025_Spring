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