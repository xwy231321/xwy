#include <iostream>

using namespace std;

class Circle {
public:
    void setr(int x) {
        r = x;
    }
    virtual void show() = 0;

protected:
    int r;
};

class Area : public Circle {
public:
    void show() {
        cout << "The circle's area is " << 3.14 * r * r << endl;
    }
};

class Perimeter : public Circle {
public:
    void show() {
        cout << "The circle's circumference is " << 2 * 3.14 * r << endl;
    }
};

int main()
{
    Circle *ptr;
    Area ob1;
    Perimeter ob2;
    
    ob1.setr(10);
    ob2.setr(10);
    ptr=&ob1;
    ptr->show();
    ptr=&ob2;
    ptr->show();
    
    return 0;
}