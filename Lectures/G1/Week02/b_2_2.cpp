#include <iostream>

using namespace std;

int main() {

    /* 
    example of using a constant:
    - getting radius as an input
    - outputting the circumference and the area of a circle with this radius
    */

    const double PI = 3.1416;

    int r;
    cin >> r; // here we initialize the variable by taking input

    cout << 2 * PI * r << endl;
    cout << PI * r * r << endl;

    return 0;
}