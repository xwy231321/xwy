#include<bits/stdc++.h>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle() : radius(0) {}
    Circle(double r) : radius(r) {}
    double circum() {
        return 2 * 3.14 * radius;
    }
    double area() {
        return 3.14 * radius * radius;
    }
    void show() {
        cout << "r=" << radius << endl;
    }
};
int main() {
    double r;
    cin >> r;

    Circle c1, c2(r);

    c1.show();
    c2.show();

    cout << c1.circum() << endl;
    cout << c2.circum() << endl;
    cout << c1.area() << endl;
    cout << c2.area() << endl;

    return 0;
}