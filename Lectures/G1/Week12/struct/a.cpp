#include <iostream>

using namespace std;

struct Product {
    int price;   // data members 
    string name; // of the Product struct
};

int main() {

    Product product;

    product.price = 100;
    product.name = "Samsa";

    cout << product.price << ' ' << product.name << endl;

    return 0;
}