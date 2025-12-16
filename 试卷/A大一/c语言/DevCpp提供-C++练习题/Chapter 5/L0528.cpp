#include <iostream>
using namespace std;
class Figure {
public:
    Figure(double a, double b) : x(a), y(b) {}
    virtual void area() {}
protected:
    double x, y;
};

class Triangle : public Figure {
public:
    Triangle(double a, double b) : Figure(a, b) {}
    void area() {
        cout << "Triangle height:" << x << ",";
        cout << "base:" << y << ",";
        cout << "area:" << 0.5 * x * y << endl;
    }
};

class Square : public Figure {
public:
    Square(double a, double b) : Figure(a, b) {}
    void area() {
        cout << "Rectangle length:" << x << ",";
        cout << "width:" << y << ",";
        cout << "area:" << x * y << endl;
    }
};

class Circle : public Figure {
public:
    Circle(double a) : Figure(a, 0) {}
    void area() {
        cout << "Circle ridius:" << x << ",";
        cout << "area:" << 3.1416 * x * x << endl;
    }
};

int main() {
    Figure* p;
    Triangle t(10.0, 6.0);
    Square s(10.0, 6.0);
    Circle c(10.0);
    p = &t;
    p->area();
    p = &s;
    p->area();
    p = &c;
    p->area();
    return 0;
}