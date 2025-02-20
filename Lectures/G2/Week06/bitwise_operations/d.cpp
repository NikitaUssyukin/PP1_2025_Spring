/*
checking if a bit is set
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {

    int a;
    cin >> a;
    int mask = 8; // a mask that can check if the bit with index 3 is set

    cout << (a & mask) << endl; // applying mask

    if((a & mask) == mask) {
        cout << "the bit for the decimal value ";
        cout << mask << " is set\n";
    }
    else {
        cout << "the bit for the decimal value ";
        cout << mask << " is not set\n";
    }

    return 0;
}