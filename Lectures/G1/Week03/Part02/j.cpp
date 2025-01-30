#include <iostream>

using namespace std;

int main() {

    // using relational operators with logical

    int a, b;

    cin >> a >> b;
    
    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;
    cout << "!b: " << (!b) << endl;

    return 0;
}