#include <iostream>

using namespace std;

int main() {

    // declaration of a constant
    // same way as with variables, but we add a const keyword at the beginning

    const double PI = 3.1416;

    // error - value of the constant cannot be changed
    // PI = 3.14;

    cout << PI << endl;

    return 0;
}