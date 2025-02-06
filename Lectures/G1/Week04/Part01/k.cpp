// switch-case

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a; // number within the range [1; 5]

    switch(a) { /*fall-through switch-case*/
        case 1:
            cout << "One" << endl;
        case 2:
            cout << "Two" << endl;
        case 3:
            cout << "Three" << endl;
        case 4:
            cout << "Four" << endl;
        case 5:
            cout << "Five" << endl;
        default:
            cout << "No number was matched!" << endl;
    }

    return 0;
}