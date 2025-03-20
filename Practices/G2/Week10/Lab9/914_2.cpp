#include <iostream>

using namespace std;

void decToHex(int n) {

    string res = "";

    while(n > 0) {
        int rem = n % 16;
        n /= 16;

        if(rem >= 10) {
            res += char('A' + rem - 10);
        }
        else res += char('0' + rem);
    }
    
    for(int i = res.length() - 1; i >= 0; --i) {
        cout << res[i];
    }
    cout << endl;
}

int main() {

    int N;
    cin >> N;

    decToHex(N);

    return 0;
}