#include<bits/stdc++.h>
using namespace std;
class Base{
  protected:
    int x;
    int y;
  public:
    void setxy(int m,int n)
    {
        x = m;
        y = n;
    }
    void showxy()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};
class Derived:public Base
{
  protected:
    int z;
  public:
    void setxyz(int m,int n,int l)
    {
        setxy(m,n);
        z = l;
    }
    void showxyz()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};

int main()
{
    Derived obj;
    obj.setxyz(30,40,50);
    obj.showxyz();
    
    //obj.y=6;
    obj.showxyz();
    
    return 0;
} 