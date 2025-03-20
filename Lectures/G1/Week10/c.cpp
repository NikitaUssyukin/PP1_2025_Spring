#include <iostream>

using namespace std;

int main() {

    /*
    Taking input into a string
    - using getline we can input strings that contain spaces
    (or any whitespace characters except the newline)
    */

    string s;

    getline(cin, s);

    cout << s << endl;

    return 0;
}