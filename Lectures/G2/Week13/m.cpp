#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<pair<int, int> > v; // empty vector of pairs

    for(int i = 0; i < n; ++i) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p); // adding the value of p to the end of the vector
        // as a new element
    }

    // sorting a vector of pairs
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
    cout << endl;

    return 0;
}