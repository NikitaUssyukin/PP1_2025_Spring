#include <iostream> 

using namespace std; 

int main() { 

    // declaring 2 variables: a and b
    int a;
    int b;

    a = 5; // initially a is 5
    b = 11; // b is 11

    a = 9; // but then the value of a is changed to 9

    b = a + b; // and the value of b is changed to a + b
    // which is an expression
    // and this expression a + b evaluates to 9 + 11, giving us 20
    // 20 is assigned into b

    // finally, another a + b expression is evaluated with the current values of a and b
    // the result is 9 + 20, giving us 29 as output
    cout << a + b << endl;

    return 0;
}