#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements
    
    for(int i = 0; i < n; ++i) {
        a[i] = (i + 1) * 2;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}