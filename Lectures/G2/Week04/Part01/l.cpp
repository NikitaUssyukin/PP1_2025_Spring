// switch-case

#include <iostream>

using namespace std;

int main() {

    char grade;
    cin >> grade;

    switch(grade) { // fall-through switch
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Good" << endl;
            break;
        case 'D':
            cout << "Ok" << endl;
            break;
        case 'F':
            cout << "You tried" << endl;
            break;
        default:
            cout << "No match" << endl;
    }

    return 0;
}