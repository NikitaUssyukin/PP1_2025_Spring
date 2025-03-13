#include <iostream>
#include <cmath> // used for abs()

using namespace std;

int main() {

    // working with indexes

    // Program that takes
    // 2 pairs of coordinates 
    // x1, y1 and x2, y2
    // and checks if they are 
    // both on the same diagonal
    // depending on that output YES or NO

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(abs(x1 - x2) == abs(y1 - y2)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}