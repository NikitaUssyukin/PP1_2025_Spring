#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Taking "infinite" input into the vector
*/

int main() {

    vector<int> v; // empty vector

    int x; // temporary variable
    while(cin >> x) {
        v.push_back(x);
    }
    // input will stop automatically on ejudge
    // Ctrl+Z and then Enter to stop input on Windows
    // Ctrl+D to stop it on Mac/Linux

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}