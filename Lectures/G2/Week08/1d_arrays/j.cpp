#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) { 
        cin >> a[i];
    }

    // reversed output
    for(int i = 0; i < n; ++i) { 
        cout << a[n - 1 - i] << ' ';
    }
    cout << endl;

    return 0;
}