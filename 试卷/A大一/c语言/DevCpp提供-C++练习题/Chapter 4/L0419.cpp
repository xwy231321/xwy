#include <bits/stdc++.h>
using namespace std ;

class Base {
public:
    int i;
    Base(int x)
    {
        i = x;
    }
    void show()
    {
        cout << "Base " << i << endl;
    }
};
class Derived : public Base {
public:
    Derived(int x) : Base (x){}
    void show()
    {
        cout << "Derived " << i << endl;
    }
};

void fun (Base &bb)
{
    cout << bb.i << endl;
}
int main()
{
    Base b1(200);
    b1.show();
    Derived d1(11);
    b1=d1;
    b1.show();
    Derived d2(22);
    Base &b2=d2;
    b2.show();
    Derived d3(33);
    Base *b3=&d3;
    b3->show();
    Derived d4(77);
    fun(d4);
    
    return 0;
}