// switch-case

#include <iostream>

using namespace std;

int main() {

    char grade;
    cin >> grade;

    switch(grade) {
        case 'A':
            cout << "Excellent job!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Good one" << endl;
            break;
        case 'D':
            cout << "OK" << endl;
            break;
        case 'F':
            cout << "You tried" << endl;
            break;
        default:
            cout << "Grade was not matched" << endl;
            break;
    }

    return 0;
}