#include <iostream>

using namespace std;

int main() {

    int a[3];
    
    for(int i = 0; i < 3; ++i) {
        a[i] = (i + 1) * 2;
    }

    for(int i = 0; i < 3; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}