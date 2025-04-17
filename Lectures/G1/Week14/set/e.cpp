#include <iostream>
#include <set>

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

    int k; // target element
    cin >> k;
    if(s.find(k) != s.end()) {
        cout << k << " is present in the set\n";
    }
    else {
        cout << k << " is not present in the set\n";
    }

    return 0;
}