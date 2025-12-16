#include<bits/stdc++.h>
using namespace std;
class X {
public:
    X(int sa):a(sa)
    {
        cout << "Constructing class X." << endl;
    }
    int getX()
    {
        return a;
    }
    ~X()
    {
        cout << "Destructing class X." << endl;
    }
private:
    int a;
};

class Y{
public:
    Y(int sb):b(sb)
    {
        cout << "Constructing class Y." << endl;
    }
    int getY()
    {
        return b;
    }
    ~Y()
    {
        cout << "Destructing class Y." << endl;
    }
private:
    int b;
};
class Z : public X, private Y {
public:
    Z(int sa, int sb, int sc) : X(sa), Y(sb), c(sc)
    {
        cout << "Constructing class Z." << endl;
    }
    int getZ()
    {
        return c;
    }
    int getY()
    {
        return Y::getY();
    }
    ~Z()
    {
        cout << "Destructing class Z." << endl;
        
    }
private:
    int c;
};
int main()
{
    Z obj(2,4,6);
    int ma=obj.getX();
    cout<<"a="<<ma<<endl;
    int mb=obj.getY();
    cout<<"b="<<mb<<endl;
    int mc=obj.getZ();
    cout<<"c="<<mc<<endl;
    return 0;
} 