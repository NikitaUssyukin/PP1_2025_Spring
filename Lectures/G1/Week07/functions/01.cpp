#include <iostream>

using namespace std;

bool isPrime(int num) {
    for(int i = 2; i < num; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {

    int a;
    cin >> a;

    bool b = true;

    for(int i = 2; i < a; ++i) {
        if(a % i == 0) {
            b = false;
            break;
        }
    }
    
    cout << b << endl;

    return 0;
}