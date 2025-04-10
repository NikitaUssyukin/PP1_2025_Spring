#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v; // an empty vector
    // i.e. with 0 elements

    // cout << v.size() << endl;

    // input does not start - the size is 0
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    // same with the output
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}