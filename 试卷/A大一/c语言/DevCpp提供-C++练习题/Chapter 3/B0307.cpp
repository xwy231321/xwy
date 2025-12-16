#include<bits/stdc++.h>
using namespace std;
class Point {
private:
    float x;
    float y;

public:
    void setx(float x) {
        this->x = x;
    }

    void sety(float y) {
        this->y = y;
    }

    void show() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main() {
    Point p1;
    float x, y;
    cin >> x >> y;
    p1.setx(x);
    p1.sety(y);
    p1.show();
    return 0;
}