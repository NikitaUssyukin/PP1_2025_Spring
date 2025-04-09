#include <iostream>

using namespace std; 

int main() {

    int a[10000]; // 10000 - "real" size

    int n = 0; // logical size of the array

    int temp; // temporary variable
    cin >> temp;
    while(temp != 0) {
        a[n] = temp;
        ++n;
        cin >> temp;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}