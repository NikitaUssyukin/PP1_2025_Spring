#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v; 

    for(int i = 0; i < n; ++i) {
        int x; // temporary variable
        cin >> x;
        v.push_back(x); // adds a new element at the end of v
        // with the value of x
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}