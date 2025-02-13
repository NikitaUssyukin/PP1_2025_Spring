#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int res = 50 * n + ((n - 1) / 2 * 2) * 15 + 10 * ((n - 1) % 2);

    int h = res / 60;
    int m = res % 60;

    cout << h + 8 << ":"; // 8 is the start of the day
    // always outputting minutes with 2 digits
    cout << m / 10 << m % 10 << endl; 

    return 0;
}