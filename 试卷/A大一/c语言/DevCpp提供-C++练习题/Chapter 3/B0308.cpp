#include<bits/stdc++.h>
using namespace std;
class Point {
private:
    float x;
    float y;

public:
    Point() : x(0), y(0) {}

    void setx(float x_val) {
        x = x_val;
    }

    void sety(float y_val) {
        y = y_val;
    }

    void show() {
        cout << "(" << x << "," << y << ")" << endl;
    }

    float distance() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point p1;
    float x, y;

    cin >> x >> y;

    p1.setx(x);
    p1.sety(y);

    p1.show();

    cout << p1.distance() << endl;

    return 0;
}