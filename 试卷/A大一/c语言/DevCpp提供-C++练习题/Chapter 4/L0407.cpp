#include<bits/stdc++.h>
using namespace std;
class A{
  public:
    A()
    {
        cout << "Constructing class A." << endl;
    }
    ~A()
    {
        cout << "Destructing class A." << endl;
    }
};
class B:public A{
  public:
    B()
    {
        cout << "Constructing class B." << endl;
    }
    ~B()
    {
        cout << "Destructing class B." << endl;
    }
};
int main()
{
    B b;
    return 0;
} 