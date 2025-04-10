#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v; // empty vector

    for(int i = 0; i < n; ++i) {
        int x; // temporary variable
        cin >> x;
        v.push_back(x); // adding the value of x to the end of the vector
        // as a new element
    }

    // sorting a vector
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}