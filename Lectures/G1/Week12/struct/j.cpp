#include <iostream>

using namespace std;

struct Product {
    int price;   // data members 
    string name; // of the Product struct

    // overloaded operator + for the product
    Product operator + (Product another) {
        Product result;
        result.name = name + another.name;
        result.price = price + another.price;
        return result;
    }
};

int main() {

    Product p1;
    Product p2;
    cin >> p1.price >> p1.name;
    cin >> p2.price >> p2.name;

    Product p3 = p1 + p2;

    cout << p3.price << ' ' << p3.name << endl;

    return 0;
}