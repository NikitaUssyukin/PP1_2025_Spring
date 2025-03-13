#include <iostream>

using namespace std;

int main() {

    // working with indexes

    // Program that takes
    // one pair of coordinates 
    // and checks if it is 
    // on the main diagonal
    // depending on that output YES or NO

    int x, y;
    cin >> x >> y;

    if(x == y) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}