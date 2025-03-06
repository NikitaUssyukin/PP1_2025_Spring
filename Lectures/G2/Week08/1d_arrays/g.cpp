#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    // pitfall: off by 1 error

    for(int i = 1 /*should be 0*/; i < n; ++i) { 
        // i goes within the range [1; n)
        // whereas it should be within [0; n)
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) { 
        // i goes within the range [0; n)
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}