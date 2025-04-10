#include <iostream>
#include <vector>

using namespace std;

/*
Working with a 2D vector
*/

int main() {

    vector<vector<int> > v; // empty 2D vector

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        vector<int> temp_row;
        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            temp_row.push_back(x);
        }
        v.push_back(temp_row);
    }

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}