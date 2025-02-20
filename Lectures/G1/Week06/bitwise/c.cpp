/*
bitwise operators
&  - AND
|  - OR
^  - XOR
>> - shift right
<< - shift left
~  - NOT (inversion)
*/

#include <iostream>

using namespace std;

int main() {

    int a = 1073741824;
    int b = 1;
    
    cout << (a << b) << endl;

    a = -2147483648;

    cout << (a >> b) << endl;

    return 0;
}