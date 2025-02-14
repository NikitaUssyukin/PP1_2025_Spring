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
    // calculating the sum and the average

    int n;
    cin >> n;

    double avg;
    double sum = 0;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
    }

    avg = sum / n;

    cout << avg << endl;

    return 0;
}