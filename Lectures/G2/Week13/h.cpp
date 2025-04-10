#include <iostream>
#include <vector>

using namespace std;

// helper function to check properites of the vector
// empty, size, capacity

void check_vector(vector<int> &v) {
    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";
    cout << "Is empty: " << v.empty() << "\n";
}

int main() {

    int n;
    cin >> n;

    vector<int> v; 

    check_vector(v);

    for(int i = 0; i < n; ++i) {
        int x; // temporary variable
        cin >> x;
        v.push_back(x); // adds a new element at the end of v
        // with the value of x
        check_vector(v);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}