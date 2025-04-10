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

// helper function to check properites of the vector
// isempty, size, capacity

void check_vector(vector<int> &v) {
    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";
    cout << "Is empty: " << v.empty() << "\n";
}

int main() {

    int n;
    cin >> n;
    vector<int> v; // empty vector

    check_vector(v);

    for(int i = 0; i < n; ++i) {
        int x; // temporary variable
        cin >> x;
        v.push_back(x); // adding the value of x to the end of the vector
        // as a new element

        check_vector(v);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    v.clear(); // erase all elements
    check_vector(v);

    return 0;
}