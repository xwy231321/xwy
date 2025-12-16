#include<bits/stdc++.h>
using namespace std;
class Base{
protected:
    int x,y;
public:
    Base(int xx,int yy):x(xx),y(yy){
        cout << "Base(" << x << "," << y << ")" << endl;
    }
    void show()
    {
        cout << "Base: x=" << x << ",y=" << y << endl;
    }
};
class Derive : public Base{
public:
    Derive(int xx,int yy):Base(xx,yy){
        cout << "Derive(" << x << "," << y << ")" << endl;
    }
    void show()
    {
        cout << "Derive: x=" << x << ",y=" << y << endl;
    }
};
int main()
{
    Base b(3,5),*p;
    Derive d(6,8);
    p=&b;
    p->show();
    p=&d;
    p->show();
    d.show();    
    return 0;    
} 
