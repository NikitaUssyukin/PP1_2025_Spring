#include <iostream>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;
};

bool cmp(Point p1, Point p2) {
    if(p1.x != p2.x) return p1.x < p2.x;
    else return p1.y < p2.y;
}

int main() {

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