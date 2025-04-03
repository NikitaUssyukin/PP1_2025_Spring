#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

Point P;

double calc_proximity(Point other) {
    return sqrt(pow(P.x - other.x, 2) + pow(P.y - other.y, 2));
}

bool cmp(Point p1, Point p2) {
    return calc_proximity(p1) < calc_proximity(p2);
}

int main() {

    cin >> P.x >> P.y; // taking input of x and y of Point P

    int n;
    cin >> n;
    Point points[n];

    for(int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << points[i].x << ' ' << points[i].y << endl;
    }

    return 0;
}