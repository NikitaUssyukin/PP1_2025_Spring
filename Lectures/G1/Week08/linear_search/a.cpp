#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements

    for(int i = 0; i < n; ++i) { // demonstration of segfault
        cin >> a[i];
    }
    int target;
    cin >> target; // number to find

    for(int i = 0; i < n; ++i) { // demonstration of segfault
        if(a[i] == target) {
            cout << "Target found at index " << i << endl;
            return 0; // stops the program
        }
    }
    cout << "Target not found" << endl;

    return 0;
}