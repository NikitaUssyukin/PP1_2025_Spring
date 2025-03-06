#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) { 
        cin >> a[i];
    }

    // reversing the array itself
    // reverse(array_name + first_idx, array_name + last_idx + 1)
    reverse(a, a + n);
    // reversed within the range [0; n)
    // that is, the whole array

    for(int i = 0; i < n; ++i) { 
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}