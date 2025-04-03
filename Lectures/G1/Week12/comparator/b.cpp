#include <iostream>
#include <algorithm>

using namespace std;

// comparator function
bool cmp(int a, int b) {
    return a > b; // returns true if a is more than b
    // recreates the reversed order of sorting - descending
}

int main() {

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}