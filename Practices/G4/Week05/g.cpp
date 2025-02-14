#include <iostream>

using namespace std;

int main() {

    /*
    how to get an input of variable length
    i. e.,
    input with variable amount of elements
    */

    // this program takes n integers from the input
    // now using for

    int n;
    cin >> n;

    double avg;
    double sum = 0;

    for(int i = 1; i <= n; ++i) { // [1; n] inclusive
        int x;
        cin >> x;
        sum += x;
        avg = sum / i;
        cout << avg << ' '; // rolling average
    }
    cout << endl;

    avg = sum / n; // final average

    cout << avg << endl;

    return 0;
}