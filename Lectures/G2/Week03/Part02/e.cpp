#include <iostream>

using namespace std;

int main() {

    // combining logical and relational operators:  

    int a, b, c;
    cin >> a >> b >> c;

    // check if a < b < c is true

    cout << (a < b && b < c) << endl;
    
    return 0;
}