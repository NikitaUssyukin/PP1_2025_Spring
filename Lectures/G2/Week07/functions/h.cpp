#include <iostream>

using namespace std;

int main() {

    double a = 123456789;
    double b = 0.0000000000000123456789;

    printf("%.2f\n", a);
    printf("%.2f\n", b);
    
    printf("%.2f %.2f\n", a, b);

    printf("%.2f %.20f\n", b, b);

    return 0;
}