#include <iostream>
#include <algorithm>

using namespace std;

// comparator function
bool cmp(int a, int b) {
    return a < b; // this comparator implements the default sorting order
    // that is, ascending, from smaller to larger
}

int main() {

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, cmp); // we pass the comparator as an object
    // that is, we don't call it here

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}