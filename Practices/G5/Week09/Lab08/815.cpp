#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    int start = 0;
    int end = n - 1;

    int cnt = 1;

    while(start <= end) {
        //1
        for(int j = start; j <= end; j++) {
            a[start][j] = cnt++;
        }

        //2
        for(int i = start + 1; i <= end; i++) {
            a[i][end] = cnt++;
        }

        //3
        for(int j = end - 1; j >= start; j--) {
            a[end][j] = cnt++;
        }

        //4
        for(int i = end - 1; i > start; i--) {
            a[i][start] = cnt++;
        }

        //5
        start++;
        end--;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}