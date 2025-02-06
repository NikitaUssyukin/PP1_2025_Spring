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
            cout << "Good one" << endl;
            break;
        case 'C':
            cout << "OK" << endl;
            break;
        case 'D':
            cout << "Well, at least you tried" << endl;
            break;
        case 'F':
            cout << "F, Retake" << endl;
            break;
        default:
            cout << "Grade was not matched" << endl;
            break;
    }

    return 0;
}