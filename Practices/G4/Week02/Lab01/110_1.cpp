#include <iostream>

using namespace std;

int main() {

    int n; // amount of rabbits met on the 1st day
    int d; // amount of days
    cin >> n >> d;

    const int a_1 = 2; // first term of the progression
    int a_n = d;       // n-th term of the progression

    cout << (double(d - 1) / 2 * (a_1 + a_n)) * n * 2 + n << endl;

    return 0;
}