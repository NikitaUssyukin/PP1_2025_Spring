#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int a; // global a

void increase_by_2() {
    a += 2;
}

int main() {

    cin >> a;

    increase_by_2();

    cout << a << endl;

    return 0;
}