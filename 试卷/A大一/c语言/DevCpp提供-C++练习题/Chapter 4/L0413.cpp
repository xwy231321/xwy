#include<bits/stdc++.h>
using namespace std;
class X {
public:
    void setX(int x)
    { 
        a = x;
    }
    void showX()
    {
        cout << "a=" << a << endl;
    }
protected:
    int a;
};
class Y {
public:
    void setY(int x)
    {
        b = x;
    }
    void showY()
    {
        cout << "b=" << b << endl;
    }
protected:
    int b;
};

class Z : public X , public Y {
public:
    void setZ(int x ,int y)
    {
        c = x;
        setY(y);
    }
    void showZ()
    {
        showY() ;
        cout << "c=" << c << endl;
    }
protected:
    int c;
};
int main()
{
    Z obj;
    obj.setX(3);
    obj.showX();
    obj.setY(4);
    obj.showY();
    obj.setZ(6,8);
    obj.showZ();    
    return 0;
} 