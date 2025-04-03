#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    int price;   // data members
    string name; // also known as fields

    bool operator < (Product another) {
        if(price != another.price) return price < another.price;
        else return name < another.name;
    }
};

int main() {

    int n;
    cin >> n;
    Product products[n];

    for(int i = 0; i < n; ++i) {
        cin >> products[i].price >> products[i].name;
    }

    sort(products, products + n);

    for(int i = 0; i < n; ++i) {
        cout << products[i].price << ' ' << products[i].name << endl;
    }

    return 0;
}