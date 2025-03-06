#include <iostream>

using namespace std;

const int ARR_SIZE = 1000; // physical size of the array

int main() {

    int a[ARR_SIZE];
    int n = 0; // logical size of the array
    // i.e., the size we're actually using

    int temp;
    int sum = 0;

    while(cin >> temp) {
        a[n] = temp;
        sum += a[n];
        ++n;
    }

    cout << sum << endl;

    return 0;
}