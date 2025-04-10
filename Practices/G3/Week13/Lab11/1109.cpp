#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    vector<int> cnt(1000001, 0); // cnt vector 

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        cnt[v[i]]++;
    }

    int cnt_at_least_2 = 0;

    for(int i = 0; i < cnt.size(); ++i) {
        if(cnt[i] >= 2) ++cnt_at_least_2;
    }

    cout << cnt_at_least_2 << endl;

    return 0;
}