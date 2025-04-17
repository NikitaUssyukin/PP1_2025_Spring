#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        m[s]++;
    }

    vector<pair<string, int> > v(m.begin(), m.end());

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}
