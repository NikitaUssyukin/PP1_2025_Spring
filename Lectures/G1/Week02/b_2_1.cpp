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

    double circumference = 2 * PI * r;
    double area = PI * r * r;

    cout << circumference << endl;
    cout << area << endl;

    return 0;
}