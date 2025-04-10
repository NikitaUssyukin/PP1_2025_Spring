#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    vector<int> cnt(6, 0); // cnt vector 

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        cnt[v[i]]++;
    }

    int most_frequent_num = 0;

    for(int i = 0; i < cnt.size(); ++i) {
        if(cnt[most_frequent_num] < cnt[i]) most_frequent_num = i;
    }

    cout << most_frequent_num << endl;

    return 0;
}