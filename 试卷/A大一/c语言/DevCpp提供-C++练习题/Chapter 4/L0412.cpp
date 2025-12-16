#include<bits/stdc++.h>
using namespace std ;

class A{
public:
    A (int xl)
    { 
        x = xl;
    }
    void print()
    { 
        cout << "x=" << x;
    }
private:
    int x;
};
class B:private A{
public:
    B (int x1,int yl):A(x1)
    { 
        y = yl;
    }
    A::print ;
private:
    int y;
};
int main()
{
    B b(10,20);
    b.print();
    return 0;
} 