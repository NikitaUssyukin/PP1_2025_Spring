#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, string> m;

    for(int i = 0; i < n; ++i) {
        string command;
        cin >> command; // set or get
        if(command == "get") {
            string key;
            cin >> key;
            if(m[key].empty()) /*empty string is the default value*/ {
                cout << "KE: no key " << key << " found in the document\n";
            }
            else cout << m[key] << endl;
        }
        else if(command == "set") {
            string key, value;
            cin >> key >> value;
            m[key] = value;
        }
    }

    return 0;
}