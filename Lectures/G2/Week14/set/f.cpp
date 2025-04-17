#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    set<int> s(v.begin(), v.end());

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}
