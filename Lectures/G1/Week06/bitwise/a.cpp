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

    int a, b;
    cin >> a >> b;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
    cout << (a >> b) << endl;
    cout << (a << b) << endl;

    return 0;
}