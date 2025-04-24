#include <iostream>

using namespace std;

int main() {

    string s;
    char t;
    cin >> s >> t;

    int first_occ = -1; // -1 here means that the variable is not set
    int last_occ = -1;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == t && first_occ == -1) { 
            first_occ = i;
        }
        else if(s[i] == t) last_occ = i;
    }

    if(first_occ != -1) cout << first_occ;
    if(last_occ != -1) cout << ' ' << last_occ << endl;

    return 0;
}