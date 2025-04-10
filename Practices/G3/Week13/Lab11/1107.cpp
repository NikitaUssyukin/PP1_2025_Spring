#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n - 1; i += 2) {
        if(v[i] != v[i + 1]) {
            cout << v[i] << endl;
            return 0;
        }
    }

    cout << v.back() << endl;

    return 0;
}