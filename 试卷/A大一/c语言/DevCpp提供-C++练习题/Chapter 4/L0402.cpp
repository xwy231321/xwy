#include<bits/stdc++.h>
using namespace std;
class Base{
  protected:
    int a;
  public:
    void seta(int sa)
    {
        a = sa;
    }
    void showa()
    {
        cout << "a=" << a << endl;
    }
};
class Derive1:public Base{
  protected:
    int b;
  public:
    void setab(int sa,int sb)
    {
        a = sa;
        b = sb;
    }
    void showab()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
class Derive2:public Derive1{
  protected:
    int c;
  public:
    void setabc(int sa,int sb,int sc)
    {
        setab(sa,sb);
        c = sc;
    }
    void showabc()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
};
int main()
{
    Base op1;
    op1.seta(1);
    op1.showa();
    
    Derive1 op2;
    op2.setab(2,3);
    op2.showab();
    
    Derive2 op3;
    op3.setabc(4,5,6);
    op3.showabc();
    
    return 0;
} 
