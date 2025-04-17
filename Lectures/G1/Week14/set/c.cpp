#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s;

    int x;
    while(cin >> x) { // infinite input into the set
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