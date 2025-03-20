#include <iostream>
#include <algorithm>

using namespace std;

string greet(string name) {
    return "Hello, " + name + "!"; 
}

int main() {

    string s;
    cin >> s;

    cout << greet(s) << endl;

    return 0;
}