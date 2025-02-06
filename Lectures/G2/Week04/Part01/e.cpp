// if, else if, else

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if(a < 10) {
        cout << "a is less than 10" << endl;
    }
    else if(a > 10) {
        cout << "a is greater than 10" << endl;
    }
    else {
        cout << "a is equal to 10" << endl;
    }

    return 0;
}