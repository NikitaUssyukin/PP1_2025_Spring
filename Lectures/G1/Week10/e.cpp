#include <iostream>

using namespace std;

int main() {

    // g++ -std=c++11 e.cpp
    // add -std=c++11 flag to compile this file
    // otherwise you get an error

    /*
    String member functions, element access:
    - at()
    - operator[]
    - front()
    - back()
    */

    string s;

    cin >> s;

    // ways to output the first element
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;
    cout << *s.begin() << endl;
    
    // ways to output the last element
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl;
    cout << *(--s.end()) << endl;

    return 0;
}