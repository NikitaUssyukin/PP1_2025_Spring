#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    cout << m.size() << endl;

    m["Lion"] = 3;
    m["Turtles"] = 4;
    m["Elephant"] = 2;
    m["Monkey"] = 10;
    m["Mouse"] = 100;

    cout << m.size() << endl;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << /*key*/ it->first << ' ' << /*value*/it->second << endl;  
        // same as
        // cout << /*key*/ (*it).first << ' ' << /*value*/ (*it).second << endl;  
    }

    return 0;
}
