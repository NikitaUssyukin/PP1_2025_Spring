// if, else if, else

#include <iostream>

using namespace std;

int main() {

    // checking how many digits a number has
    int a;
    cin >> a;

    if(a < 0) {
        cout << "a is negative, error" << endl;
    } else {
        if(a < 10) {
        cout << "a has 1 digits" << endl;
        }
        else if(a < 100) {
            cout << "a has 2 digits" << endl;
        }
        else if(a < 1000) {
            cout << "a has 3 digit" << endl;
        }
        else {
            cout << "a has more than 3 digits" << endl;
        }
    }

    

    return 0;
}