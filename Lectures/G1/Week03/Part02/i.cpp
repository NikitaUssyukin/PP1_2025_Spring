#include <iostream>

using namespace std;

int main() {

    // using relational operators with logical

    int a, b, c;
    cin >> a >> b >> c;

    cout << "a < b < c: " << (a < b && b < c) << endl;

    return 0;
}