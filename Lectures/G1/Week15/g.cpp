#include <iostream>

using namespace std;

int main() {

    /*
    getting ascii codes of visible elements
    */

    for(int i = 32; i < 127; ++i) {
        cout << char(i) << " - " << i << endl;
    }

    return 0;
}