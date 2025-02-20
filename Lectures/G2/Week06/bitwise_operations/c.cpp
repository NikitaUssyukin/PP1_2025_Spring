/*
clearing a bit
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {

    int a;
    cin >> a;
    int mask = INT_MAX - 8; // a mask that can clear the bit with index 3

    cout << (a & mask) << endl; // applying mask

    return 0;
}