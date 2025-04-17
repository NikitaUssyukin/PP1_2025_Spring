#include <iostream>
#include <set>

using namespace std;

int main() {
    
    set<int> s;
    
    int x;
    while(cin >> x) {
        s.insert(x);
    }
    
    cout << "Amount of unique elements: " << s.size() << endl;
    
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << ' ';
        // * means "the value pointed by the address stored in"
    }
    cout << endl;
    
    return 0;
}
