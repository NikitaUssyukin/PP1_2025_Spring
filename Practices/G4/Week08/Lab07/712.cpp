#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    int target;
    cin >> target;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        if(target <= a[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;

    return 0;
}

/*
5 15
1 3 5 12 14 

target < a[0]

target < a[1]


5 12
1 6 7 12 13

3 9
7 10 11

*/