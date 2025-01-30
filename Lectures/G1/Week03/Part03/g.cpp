#include <iostream>

using namespace std;

int main() {

    int a = 1; 
    int b = 1;
    
    cout << ++a << endl;
    cout << b++ << endl;

    cout << --a + b++ << endl;

    a--;
    --b;

    cout << a++ + ++b << endl;
    
    return 0;
}