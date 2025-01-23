#include <iostream> 

using namespace std; 

int main() { 

    // declaring 2 variables: a and b
    int a;
    int b;

    // these 2 variables are not initialized yet
    // meaning haven't yet gotten their first defined value
    // this can be fixed either by assigning a value
    // or by getting the value from the input (using cin)
    // otherwise, the variable hold an undefined value

    // to assign a value into a varible, we need the assignment operator: =
    // assignment operator works from right to left:
    // it takes what is its right hand side and assigns it into whatever is on its left hand side
    a = 5;
    b = 3;

    cout << a << ' ' << b << endl;

    return 0;
}