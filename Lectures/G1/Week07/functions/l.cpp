#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void increase_by_2(int a) {
    a += 2;
}

int main() {

    int a; // local a
    cin >> a;

    increase_by_2(a);

    cout << a << endl;

    return 0;
}