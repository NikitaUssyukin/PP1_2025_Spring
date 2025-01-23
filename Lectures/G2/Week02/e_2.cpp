#include <iostream>

using namespace std;

int main() {

    // type casting 

    char a;
    cin >> a;

    // same thing, but using implicit type casting
    
    int b = a;
    bool c = a;
    double d = a;

    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}