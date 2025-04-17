#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        m[s] = x;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << /*key*/ it->first << ' ' << /*value*/it->second << endl;  
        // same as
        // cout << /*key*/ (*it).first << ' ' << /*value*/ (*it).second << endl;  
    }

    return 0;
}
