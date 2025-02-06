// switch-case

#include <iostream>

using namespace std;

int main() {

    int day;
    cin >> day;

    switch(day) { // fall-through switch
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Working day" << endl;
            break;
        case 6:
        case 7:
            cout << "Hooray, weekend!" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    return 0;
}