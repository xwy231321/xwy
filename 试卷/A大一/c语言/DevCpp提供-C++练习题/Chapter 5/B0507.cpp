#include<bits/stdc++.h>
using namespace std;
class Circle{
protected:
    double r;
public:
    Circle(double rr):r(rr){}
    virtual void show() = 0;
};
class Area : public Circle{
public:
    Area(double rr):Circle(rr){}
    void show()
    {
        double area = 3.14 * r * r;
        cout << "area=" << area << endl;
    }
};
class Perimeter : public Circle{
public:
    Perimeter(double rr):Circle(rr){}
    void show()
    {
        double perimeter = 3.14 * r * 2;
        cout << "Perimeter=" << perimeter << endl;
    }
};
int main()
{
    double r1,r2;
    cin>>r1>>r2;
    Circle *p;
    Area a(r1);
    p=&a;
    p->show();
    Perimeter per(r2);
    p=&per;
    p->show();
    return 0;
} 