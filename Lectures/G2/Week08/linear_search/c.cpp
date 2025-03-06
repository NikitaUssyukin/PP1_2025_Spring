#include <iostream>

using namespace std;

int linearSearch(int a[], int n, int target) {
    for(int i = 0; i < n; ++i) {
        if(a[i] == target) {
            return i; // target found at i
        }
    }
    return -1; // target not found
}

int main() {

    int n;
    cin >> n;

    int a[n]; // array with n elements

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int target;
    cin >> target; // number to find

    int result = linearSearch(a, n, target);

    if(result != -1) {
        cout << "Target found at index " << result << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}