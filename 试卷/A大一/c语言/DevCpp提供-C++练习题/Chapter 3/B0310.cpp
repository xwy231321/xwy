#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    float x, y;

public:
    Point() : x(0), y(0) {
        cout << "Point(0,0)" << endl;
    }

    Point(float a, float b) : x(a), y(b) {
        cout << "Point(" << x << "," << y << ")" << endl;
    }

    ~Point() {
        cout << "~Point():" << x << "," << y << endl;
    }

    float getX() const { return x; }
    float getY() const { return y; }
};

float dis(const Point &p1, const Point &p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}
