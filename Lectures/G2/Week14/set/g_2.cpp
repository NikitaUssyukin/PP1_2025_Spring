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

    int k; // target value
    cin >> k;

    if(s.count(k)) {
        cout << k << " was found\n";
    }
    else {
        cout << k << " was not found\n";

    }

    return 0;
}
