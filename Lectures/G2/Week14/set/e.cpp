#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    set<int> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    vector<int> v(s.begin(), s.end());

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}
