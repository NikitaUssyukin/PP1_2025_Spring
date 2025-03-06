#include <iostream>

using namespace std;

void linearSearch(int a[], int n, int target) {
    for(int i = 0; i < n; ++i) {
        if(a[i] == target) {
            cout << "Target found at index " << i << endl;
            return; // stops the function
        }
    }
    cout << "Target not found" << endl;
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

    linearSearch(a, n, target);

    return 0;
}