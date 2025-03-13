#include <iostream>

using namespace std;

int main() {

    // working with indexes

    // Program that takes
    // 2 pairs of coordinates 
    // x1, y1 and x2, y2
    // and checks if they are 
    // on the same diagonal line (the same number of both rows and columns apart)
    // depending on that output YES or NO

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 - x2 == y1 - y2) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

/*
diff_x
x1 + diff_x = x2
y1 + diff_y = y2

diff_x = x2 - x1
diff_y = y2 - y1

if diff_x == diff_y, they're on the same diagonal
*/