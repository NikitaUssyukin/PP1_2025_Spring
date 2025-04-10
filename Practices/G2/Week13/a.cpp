#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    int cnt_1 = 0;
    int cnt_2 = 0;
    int cnt_3 = 0;
    int cnt_4 = 0;
    int cnt_5 = 0;

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        if(v[i] == 1) cnt_1++;
        if(v[i] == 2) cnt_2++;
        if(v[i] == 3) cnt_3++;
        if(v[i] == 4) cnt_4++;
        if(v[i] == 5) cnt_5++;
    }

    int max_cnt = max(max(max(max(cnt_1, cnt_2), cnt_3), cnt_4), cnt_5);

    if(cnt_1 == max_cnt) cout << 1 << endl;
    else if(cnt_2 == max_cnt) cout << 2 << endl;
    else if(cnt_3 == max_cnt) cout << 3 << endl;
    else if(cnt_4 == max_cnt) cout << 4 << endl;
    else cout << 5 << endl;

    return 0;
}