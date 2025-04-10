#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Taking "infinite" input into the vector until we get 0
*/

int main() {

    vector<int> v; // empty vector

    int x; // temporary variable
    while(cin >> x) {
        if(x == 0) break;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}