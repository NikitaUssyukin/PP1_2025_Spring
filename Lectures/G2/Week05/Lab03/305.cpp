#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int diff = a - b;

    cout << a - diff * (diff < 0) << endl;

    return 0;
}