/*
bit masking
*/

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    int mask = 15; // a mask that preserves only the last 4 bits
    // 00000000 00000000 00000000 00001111

    cout << (a & mask) << endl; // applying mask

    return 0;
}