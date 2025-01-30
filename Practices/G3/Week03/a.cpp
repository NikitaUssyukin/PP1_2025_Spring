#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    bool d = (a < b);

    cout << d << endl;
    cout << (d < c) << endl;

    cout << (a < b < c) << endl;

    return 0;
}