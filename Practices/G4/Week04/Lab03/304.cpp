/*
n = 7500
h = n / 60 / 60 % 24
m = n / 60 % 60
s = n % 60 

02:05:00

 2 => 02
12 => 12

2 / 10 = 0
2 % 10 = 2

12 / 10 = 1
12 % 10 = 2



*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int h = n / 60 / 60 % 24;
    int m = n / 60 % 60;
    int s = n % 60;

    cout << h / 10 << h % 10 << ":";
    cout << m / 10 << m % 10 << ":";
    cout << s / 10 << s % 10 << endl;
    
    return 0;
}