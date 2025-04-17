#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    // adding elements to a map
    m["Dog"] = 3;
    m["Cat"] = 2;
    m["Mouse"] = 100;
    m["Monkey"] = 10;
    m["Giraffe"] = 1;

    cout << "Dog" << ' ' << m["Dog"] << endl;
    cout << "Cat" << ' ' << m["Cat"] << endl;
    cout << "Mouse" << ' ' << m["Mouse"] << endl;
    cout << "Monkey" << ' ' << m["Monkey"] << endl;
    cout << "Giraffe" << ' ' << m["Giraffe"] << endl;

    return 0;
}