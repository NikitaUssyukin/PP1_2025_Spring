// if, else if, else

#include <iostream>

using namespace std;

int main() {

    int a = 5;

    bool condition = (a % 2 == 0);

    if(condition) {
        cout << "a is even" << endl;
    }
    else {
        cout << "a is odd" << endl;
    }

    return 0;
}