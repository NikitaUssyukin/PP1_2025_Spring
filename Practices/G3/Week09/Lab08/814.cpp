#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    bool isCool = true;

    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < m - 1; ++j) {
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
            if(sum == 4 || sum == 0) isCool = false;
        }
        if(!isCool) break;
    }

    if(isCool) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}