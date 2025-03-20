#include <iostream>

using namespace std;

// use g++ -std=c++11 i.cpp to compile
// does not work becuase of s.front() and s.back()

int main() {

    string s = "parrot";

    // ways to access the first element
    cout << s[0] << endl;
    cout << s.at(0) << endl; // provided checked access
    // if the index is out of bounds, at() throws an error
    cout << s.front() << endl; // does not compile without
    // the -std=c++11 flag
    cout << *s.begin() << endl; // s.begin() is an iterator
    // it contains an address
    // by dereferencing, we get the value at that address
    
    // ways to access the last element
    cout << s[s.length() - 1] << endl;
    cout << s.at(s.length() - 1) << endl; // provided checked access
    // if the index is out of bounds, at() throws an error
    cout << s.back() << endl; // does not compile without
    // the -std=c++11 flag
    cout << *(--s.end()) << endl; // s.begin() is an iterator
    // it contains an address
    // by dereferencing, we get the value at that address

    return 0;
}