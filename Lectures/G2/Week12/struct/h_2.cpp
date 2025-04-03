#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;   // data members
    string name; // also known as fields
};

bool cmp(Product p1, Product p2) {
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

    sort(products, products + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << products[i].price << ' ' << products[i].name << endl;
    }

    return 0;
}