/*
clearing a bit
*/

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    int clear = -1 - 8; // allows us to clear if the 4-th bit
    // (switch to 0 bit with index 3)
    // 11111111 11111111 11111111 11110111

    cout << (a & clear) << endl; // applying mask

    return 0;
}