#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        m[x]++;
    }

    map<int, int>::iterator it = m.end();

    --it; // last elememt
    --it; // element before the last

    cout << it->second << endl;    

    return 0;
}
