// if, else if, else

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if(a > 0) {
        if(a % 2 == 0) {
            cout << "a is positive and even" << endl;
        }
        else {
            cout << "a is positive and odd" << endl;
        }
    }
    else if(a < 0) {
        if(a % 2 == 0) {
            cout << "a is negative and even" << endl;
        }
        else {
            cout << "a is negative and odd" << endl;
        }
    }
    else {
        cout << "a is zero" << endl;
    }

    return 0;
}