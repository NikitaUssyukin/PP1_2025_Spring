#include <iostream>
using namespace std;
 
int main(){
    int n, d; // 5 5
    cin >> n >> d;
    int total = n;
    for(int i = 2; i <= d; ++i){
        int today = n * (2 * i); // 10, 20, 30, 40, 50 = 150
        total += today;
    }
    cout << total;
    return 0;
}