#include <bits/stdc++.h>
using namespace std;
class Base{
public:
    Base()
    {
        a = 5;
        cout << "Base a=" << a << endl;
    }
protected:
    int a;
};
class Basel : virtual public Base {
public:
    int b1;
    Basel()
    {
        a = a + 10 ; cout << "Base1 a=" << a << endl;
    }
};
class Base2 : virtual public Base {
public:
    int b2;
    Base2()
    {
        a = a + 20 ; cout << "Base2 a=" << a << endl;
    }
};

class Derived : public Basel , public Base2 {
public:
    int d ;
    Derived()
    {
        cout << "Derived a=" << a << endl;
    }
};

int main ()
{
    Derived obj;
    return 0 ;
}