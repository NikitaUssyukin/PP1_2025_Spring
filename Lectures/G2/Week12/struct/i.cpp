#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;   // data members
    string name; // also known as fields
};

bool equals(Product p1, Product p2) {
    return (p1.price == p2.price) && (p1.name == p2.name);
}

int main() {

    Product p1;
    Product p2;

    cin >> p1.price >> p1.name;
    cin >> p2.price >> p2.name;
    
    cout << equals(p1, p2) << endl;

    return 0;
}