#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;     // data members
    string name;   // also known as fields

    void print() { // member function
        cout << price << ' ' << name << endl;
    }
};

bool equals(Product p1, Product p2) {
    return (p1.price == p2.price) && (p1.name == p2.name);
}

int main() {

    Product p1;
    Product p2;

    cin >> p1.price >> p1.name;
    cin >> p2.price >> p2.name;

    p1.print();
    p2.print();
    
    // if(p1 == p2) {
    //     cout << "Products are the same\n";
    // }
    // else {
    //     cout << "Products are different\n";
    // }

    return 0;
}