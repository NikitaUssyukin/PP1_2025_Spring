#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    set<int> s;

    int x;
    while(cin >> x) { // infinite input into the set
        s.insert(x);
    }

    cout << "Amount of unique elements: " << s.size() << endl;

    vector<int> v(s.begin(), s.end());

    reverse(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;


    return 0;
}