#include <iostream>

using namespace std;

int main() {

    // working with indexes

    // Program that takes n - size of the n x n 2d array
    // and then one pair of coordinates x and y
    // and checks if it is 
    // on the secondary diagonal
    // depending on that output YES or NO

    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    if(x + y == n - 1) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}