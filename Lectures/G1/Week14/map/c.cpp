#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    cout << m.size() << endl;

    // adding elements to a map
    m["Dog"];
    m["Cat"];
    m["Mouse"];
    m["Monkey"];
    m["Giraffe"];

    cout << m.size() << endl;

    cout << "Dog" << ' ' << m["Dog"] << endl;
    cout << "Cat" << ' ' << m["Cat"] << endl;
    cout << "Mouse" << ' ' << m["Mouse"] << endl;
    cout << "Monkey" << ' ' << m["Monkey"] << endl;
    cout << "Giraffe" << ' ' << m["Giraffe"] << endl;

    return 0;
}