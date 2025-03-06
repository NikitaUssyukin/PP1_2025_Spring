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

    // sort(a + firstIndex, a + lastIndex + 1)
    sort(a, a + n); // sorts the whole array
    // i.e. sorts the index range [0; n) (same as [0; n - 1])

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}