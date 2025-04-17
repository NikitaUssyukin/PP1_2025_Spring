#include <iostream>
#include <map>
#include <vector>
#include <reverse>

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



    return 0;
}