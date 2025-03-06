#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    // pitfall: index going out of bounds
    // index must always be within [0; n)
    // going out of bound of the index is a logical error

    for(int i = 0; i <= n; ++i) { 
        // i goes within the range [0; n]
        // whereas it should be within [0; n)
        cin >> a[i];
    }

    for(int i = 0; i <= n; ++i) { 
        // i goes within the range [0; n]
        // whereas it should be within [0; n)
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}