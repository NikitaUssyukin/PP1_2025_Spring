#include <iostream>

using namespace std;

void input_2D_array(int a[][100], int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][100];
    
    input_2D_array(a, n, m);

    for(int i = 0; i < n; ++i) {
        cout << a + i << endl;
        // 3 hex numbers that differ by 400
    }

    return 0;
}

