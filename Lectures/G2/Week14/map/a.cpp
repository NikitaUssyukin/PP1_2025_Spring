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

    cout << "Lion" << ' ' << m["Lion"] << endl;
    cout << "Turtles" << ' ' << m["Turtles"] << endl;
    cout << "Elephant" << ' ' << m["Elephant"] << endl;
    cout << "Monkey" << ' ' << m["Monkey"] << endl;
    cout << "Mouse" << ' ' << m["Mouse"] << endl;

    return 0;
}
