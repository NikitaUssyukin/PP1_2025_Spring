#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    /*
    getting ascii codes of uppercase letters
    */

    for(int i = 'A'; i <= 'Z'; ++i) {
        cout << char(i) << " - " << i << endl;
    }

    return 0;
}