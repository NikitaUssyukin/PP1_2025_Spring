/*
    5
a   4 5 6 7 10
    i

    5
b   2 4 6 7 8
    j

if(a[i] > b[j]) -> take b[j] and ++j
else if(a[i] < b[j]) -> take a[i] and ++i
else take either of them and increment their index variable
I will take a[i] and ++i

then

while(i < n) take a[i], put it at the end and ++i
while(j < m) take b[j], put it at the end and ++j

    5
a   4 5 6 7 10
            i

    5
b   2 4 6 7 8
              j



    2 4 4 5 6 6 7 7 8 10

    1
4
4
1 1 5 6

1 1 4  

i = 1
j = 2
*/


#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[n + m];

    int temp;
    if(m > 0) {
        cin >> temp;
    }

    int i = 0;
    int j = 0;
    while(i < n && j < m) {

        if(a[i] > temp) {
            b[i + j] = temp;
            ++j;
            if(j < m) cin >> temp;
        }
        else if(a[i] < temp) {
            b[i + j] = a[i];
            ++i;
        }
        else {
            b[i + j] = a[i];
            ++i;
        }
    }

    while(i < n) {
        b[i + j] = a[i];
        ++i;
    }
    while(j < m) {
        b[i + j] = temp;
        ++j;
        if(j < m) cin >> temp;
    }

    for(int k = 0; k < n + m; ++k) {
        cout << b[k] << ' ';
    }
    cout << endl;

    return 0;
}