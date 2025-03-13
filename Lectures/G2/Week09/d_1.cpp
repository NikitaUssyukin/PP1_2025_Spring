#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    /*
    3 3
    1 2 3
    4 5 6
    7 8 9
     
    */

    int a[n][m];
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // sort(*(a + start_row) + start_col, *(a + end_row) + end_col)
    // end_row, end_col are exclusive
    sort(*a, *(a + n)); /// in this context * is dereference operator
    // where reference means an address in computer memory

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
