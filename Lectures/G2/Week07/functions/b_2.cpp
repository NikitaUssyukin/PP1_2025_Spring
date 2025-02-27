#include <iostream>

using namespace std;

void add(int num1, int num2) {
    cout << num1 + num2 << endl;
}

int main() {

    int a, b;

    cin >> a >> b;

    add(a, b);

    return 0;
}