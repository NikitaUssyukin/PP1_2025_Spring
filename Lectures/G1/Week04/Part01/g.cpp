// if, else if, else

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if(a >= 0 && a < 10) {
        cout << "a is within [0; 10)" << endl;
    }
    else if(a >= 10 && a < 100) {
        cout << "a is within [10; 100)" << endl;
    }
    else {
        cout << "a is within [100; infinity)" << endl;
    }

    return 0;
}