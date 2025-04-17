#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(2);

    set<int>::iterator it;
    for(it = s.begin(); it < s.end(); ++it) {
        cout << *it << ' ';
        // * means "the value pointed by the address stored in"
    }
    cout << endl;

    return 0;
}
