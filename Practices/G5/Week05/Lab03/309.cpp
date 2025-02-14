/*
a = 1    b = 2

a % b 

(a % b) * (b % a) + 1

1 % 2 = 1
2 % 1 = 0
1 * 0 = 0

a = 2    b = 4

2 % 4 = 2
4 % 2 = 0
2 * 0 = 0



a = 11   b = 2

11 % 2 = 1
2 % 11 = 2

(11 % 2) * (2 % 11) = 1 * 2 = 2


*/

#include <iostream> 

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << (a % b) * (b % a) + 1 << endl;

    return 0;
}