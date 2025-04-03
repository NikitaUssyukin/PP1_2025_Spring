#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;   // data members 
    string name; // of the Product struct
};

// comparator for the product
// see comparator folder for intro to this topic
bool product_cmp(Product p1, Product p2) {
    if(p1.price != p2.price) return p1.price < p2.price;
    else return p1.name < p2.name;
}

int main() {

    int n;
    cin >> n;
    Product products[n];

    for(int i = 0; i < n; ++i) {
        cin >> products[i].price >> products[i].name;
    }

    stable_sort(products, products + n, product_cmp);

    for(int i = 0; i < n; ++i) {
        cout << products[i].price << ' ' << products[i].name << endl;
    }

    return 0;
}