#include <iostream>

using namespace std;

void doubleAllElements(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    doubleAllElements(a, n); // array is passed as a reference
    // that is, it is not copied, therefore 
    // all the changes that will be made to the array
    // inside the function
    // will reflect on the array inside main

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}