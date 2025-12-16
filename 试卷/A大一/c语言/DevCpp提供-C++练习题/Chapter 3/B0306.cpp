#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y) : x(x), y(y) {
        cout << "Point(" << x << "," << y << ")" << endl;
    }

    Point(const Point& p) : x(p.x), y(p.y) {
        cout << "copy Point(" << x << "," << y << ")" << endl;
    }
    ~Point() {
        cout << "~Point():" << x << "," << y << endl;
    }

    friend void show(Point p1, Point p2);
};
void show(Point p1, Point p2) {
    cout << "x=" << p1.x << ",y=" << p1.y << endl;
    cout << "x=" << p2.x << ",y=" << p2.y << endl;
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Point p1(a, b), p2(c, d);
    show(p1, p2);
    return 0;
}