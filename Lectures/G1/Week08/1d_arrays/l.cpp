#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // reverse(a + firstIndex, a + lastIndex + 1)
    reverse(a + 1, a + n - 1); // reverse the range [1; n - 1)

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}