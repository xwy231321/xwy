#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x_val, int y_val) : x(x_val), y(y_val) {
        cout << "Point(" << x << "," << y << ")" << endl;
    }
    ~Point() {
        cout << "~Point():" << x << "," << y << endl;
    }
};

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Point p1(a, b), p2(c, d);
    return 0;
}