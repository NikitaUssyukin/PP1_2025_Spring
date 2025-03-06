#include <iostream>

using namespace std;

int main() {

    int temp;

    int sum = 0;

    while(cin >> temp) {
        sum += temp;
    }

    cout << sum << endl;

    return 0;
}