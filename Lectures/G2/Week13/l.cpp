#include <iostream>
#include <vector>

using namespace std;

/*
Working with a 2D vector
*/

int main() {

    vector<vector<int> > v(n, vector<int>(m)); // empty 2D vector

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}