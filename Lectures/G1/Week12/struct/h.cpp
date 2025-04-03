#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;   // data members 
    string name; // of the Product struct

    bool operator == (Product another) {
        return (price == another.price) && (name == another.name);
    }
};


int main() {

    Product p1;
    Product p2;
    cin >> p1.price >> p1.name;
    cin >> p2.price >> p2.name;

    cout << (p1 == p2) << endl;

    return 0;
}