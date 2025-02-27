#include <iostream>

using namespace std;

int add(int num1, int num2) {
    cout << num1 + num2 << endl;
    return 1; // arbitrary value, just to return something
}

int main() {

    int a, b;
    cin >> a >> b;

    add(a, b);

    return 0;
}