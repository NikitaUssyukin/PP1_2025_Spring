#include <iostream>

using namespace std;



int main() {

    string s1, s2, s3;
    
    s1 = "cat";

    s3 = s2 = s1;

    s3[2] = 'r';
    s2[0] = 'r';

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}