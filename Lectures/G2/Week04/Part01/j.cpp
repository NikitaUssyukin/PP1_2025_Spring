// switch-case

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    switch(a) { // fall-through switch
        case 1:
            cout << "One" << endl;
        case 2:
            cout << "Two" << endl;
        case 3:
            cout << "Three" << endl;
        default:
            cout << "No match" << endl;
    }

    return 0;
}