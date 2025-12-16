#include<bits/stdc++.h>
using namespace std;
class Base{
  private:
    int x;
  protected:
    int y;
  public:
    int z;
    void setx(int i)
    {
        x = i;
    }
    int getx()
    {
        return x;
    }
};
class Derived:protected Base{
  private:
    int m;
  protected:
    int n;
  public:
    int p;
    void setall(int a,int b,int c,int d,int e,int f);
    void show();
};
void Derived::setall(int a,int b,int c,int d,int e,int f)
{
    setx(a);
    y = b;
    z = c;
    m = d;
    n = e;
    p = f;
}
void Derived::show()
{
    cout << "x=" << getx() << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
    cout << "m=" << m << endl;
    cout << "n=" << n << endl;
}
int main()
{
    Derived obj;
    obj.setall(1,2,3,4,5,6);
    obj.show();
    //cout<<"y="<<obj.y<<endl;
    cout<<"p="<<obj.p<<endl;
    
    return 0;
} 