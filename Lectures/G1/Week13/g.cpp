#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Working with a 2D vector
*/

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int> > v(n, vector<int>(m)); // 2D vector with n rows and m columns

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
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