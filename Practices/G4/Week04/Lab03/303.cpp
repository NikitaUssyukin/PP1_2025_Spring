/*
n = 60
h = n / 60 % 24
m = n % 60

1:0

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int h = n / 60 % 24;
    int m = n % 60;

    cout << h << ":" << m << endl;
    
    return 0;
}