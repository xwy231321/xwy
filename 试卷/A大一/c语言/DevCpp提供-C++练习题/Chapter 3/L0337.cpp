#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int x;
    float y;
public:
    A(int x1,float y1)
    {
        cout << "Constructing A..." << endl;
        x = x1;
        y = y1;
    }
    ~A()
    {
        cout << "Destructing A..." << endl;
    }
    void show()
    {
        cout << "x=" << x << ",y=" << y << endl;
    }
};
class B{
private:
    A a;
    int z;
public:
    B(int x1,float y1,int z1):a(x1,y1)
    {
        cout << "Constructing B..." << endl;
        z = z1;
    }
    ~B()
    {
        cout << "Destructing B..." << endl;
    }
    void show()
    {
        a.show();
        cout << "z=" << z << endl;
    }
};
int main()
{
    B b(1,2,3);
    b.show();
    return 0;
}