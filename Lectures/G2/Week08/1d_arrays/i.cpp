#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    // pitfall: index going very far out of bounds
    // index must always be within [0; n)
    // going out of bounds of the index is a logical error
    // and going out of bounds too far is a run-time error - segfault

    // segmentation fault demonstration
    for(int i = 0; /*i < n*/; ++i) { 
        // i goes within the range [0; infinity)
        // whereas it should be within [0; n)
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}