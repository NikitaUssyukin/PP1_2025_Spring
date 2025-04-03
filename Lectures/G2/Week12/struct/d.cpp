#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    int prices[n];
    string names[n];

    for(int i = 0; i < n; ++i) {
        cin >> prices[i] >> names[i];
    }

    sort(prices, prices + n);

    for(int i = 0; i < n; ++i) {
        cout << prices[i] << ' ' << names[i] << endl;
    }

    return 0;
}