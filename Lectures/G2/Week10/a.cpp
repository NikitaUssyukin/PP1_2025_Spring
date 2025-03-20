#include <iostream>

using namespace std;

int main() {

    string s1 = "hi";
    string s2("hello");
    string s3(5, 'a');
    string s4 = string("hi all \n 123 $%");

    // examples of errors:
    // string s5('h');
    // string s6(123);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}