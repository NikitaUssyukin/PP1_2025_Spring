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

    for(int i = 0; i < n; ++i) { // [0; n), n is excluded
        int x;
        cin >> x;
        sum += x;
        cout << sum << ' '; // rolling sum
    }
    cout << endl;

    avg = sum / n;

    cout << avg << endl;

    return 0;
}