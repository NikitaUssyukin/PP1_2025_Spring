/*
bit masking
*/

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;
    int mask = 15; // a mask that leaves the last 4 bits intact

    cout << (a & mask) << endl; // applying mask

    return 0;
}