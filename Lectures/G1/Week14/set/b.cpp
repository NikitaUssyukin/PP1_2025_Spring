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

    cout << "Amount of unique elements: " << s.size() << endl;

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;


    return 0;
}