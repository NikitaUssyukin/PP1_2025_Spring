/*
checking if a bit is set
*/

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    int check = 8; // allows us to check if the 4-th bit is set
    // (bit with index 3)

    cout << (a & check) << endl; // applying mask

    return 0;
}