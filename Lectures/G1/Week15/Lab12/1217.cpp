#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> mp;

    int cnt_students = 0;

    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for(int j = 0; j < m; ++j) {
            string place;
            int students;
            cin >> place >> students;
            mp["Almaty"] += students; // accumulating students from a certain place
            cnt_students += students;
        }
    }

    map<string, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << ' ' << double(it->second) / cnt_students * 100 << endl;
    }

    return 0;
}