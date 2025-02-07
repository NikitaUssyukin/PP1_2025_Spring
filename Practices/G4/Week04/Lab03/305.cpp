/*
a = 4   b = 7
diff = 4-7
diff = -3
a-diff = 4 - (-3) * 1
a-diff = 7

4 - (-3 * (-3 < 0))
4 - (-3 * 1)
4 - (-3)
7


a = 7   b = 4
diff = 3
a-diff = 7 - 3 * 0
a-diff = 4
7 - (3 * (3 < 0))
7 - (3 * 0)
7 - 0
7

a = 4   b = 4

diff = 4-4 = 0

4 - (0 * (0 < 0))
4 - (0 * 0)
4 - 0
4


a - (diff * (diff < 0))
*/

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int diff = a - b;

    cout << a - (diff * (diff < 0)) << endl; 

    return 0;
}