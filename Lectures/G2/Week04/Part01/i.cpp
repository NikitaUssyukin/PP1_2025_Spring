// switch-case

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    switch(a) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        default:
            cout << "No match" << endl;
    }

    return 0;
}