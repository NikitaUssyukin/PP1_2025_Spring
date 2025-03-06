#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements

    for(int i = 0; i < n; ++i) { // demonstration of undefined values
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}