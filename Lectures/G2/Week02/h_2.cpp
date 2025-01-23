#include <iostream>

using namespace std;

int main() {

    // calculating area and circumference of a circle using its radius
    
    const double PI = 3.1416;

    int r;
    cin >> r;

    double area = PI * r * r;
    double circumference = 2 * PI * r;

    cout << area << endl;
    cout << circumference << endl;

    return 0;
}