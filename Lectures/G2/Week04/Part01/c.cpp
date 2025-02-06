// if, else if, else

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    bool condition = (a % 2 == 0);

    if(condition) {
        cout << "a is even" << endl;
    } 
    else {
        /*code here runs only when 
        the condition in the if block is false*/
        cout << "a is odd" << endl;
    }

    return 0;
}