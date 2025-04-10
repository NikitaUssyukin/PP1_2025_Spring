#include <iostream>
#include <vector>

using namespace std;

/*
"infinite" input that ends when we get 0 
*/

int main() {

    vector<int> v; // an empty vector
    // i.e. with 0 elements

    int x; // temporary variable
    while(cin >> x) {
        if(x == 0) break;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}