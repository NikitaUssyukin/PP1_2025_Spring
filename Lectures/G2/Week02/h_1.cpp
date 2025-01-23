#include <iostream>

using namespace std;

int main() {

    // calculating area and circumference of a circle using its radius
    
    const double PI = 3.1416;

    int r;
    cin >> r;

    cout << PI * r * r << endl;
    cout << 2 * PI * r << endl;

    return 0;
}