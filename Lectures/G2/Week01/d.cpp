#include <iostream> 

using namespace std; 

int main() { 

    // declaring 2 variables: a and b
    int a;
    int b;

    // taking input from the terminal using cin, instead of directly assigning values to the variables
    cin >> a >> b;

    /*
    this also works:
    cin >> a;
    cin >> b;
    */

    cout << a + b << endl;

    return 0;
}