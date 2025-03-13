#include <iostream>

using namespace std;

int main() {

    // working with indexes

    // Program that takes
    // 2 pairs of coordinates 
    // x1, y1 and x2, y2
    // and checks if they are 
    // on the same horizontal line
    // to each other
    // depending on that output YES or NO

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2) cout << "YES\n"; // assume x is for the horizontal
    else cout << "NO\n";

    return 0;
}