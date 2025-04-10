#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
STL - Standard Template Library

Algorithms, Containers, Functions, Iterators

Vector - dynamic array
Dynamic meaning that it can be resized after its declaration

Vector has its member functions - methods
Examples: size(), front(), back(), push_back(), etc
http://ejudge.kz/reference/en/cpp/container/vector.html
*/

int main() {

    int n;
    cin >> n;
    vector<int> v; // empty vector

    for(int i = 0; i < n; ++i) {
        int x; // temporary variable
        cin >> x;
        v.push_back(x); // adding the value of x to the end of the vector
        // as a new element
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}