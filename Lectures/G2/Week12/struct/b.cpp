#include <iostream>

using namespace std;

struct Product {
    int price;   // data members
    string name; // also known as fields
};

int main() {

    Product product; // variable of type Product
    // also can be called an object of the struct Product

    cin >> product.price >> product.name;

    cout << product.price << ' ' << product.name << endl;

    return 0;
}