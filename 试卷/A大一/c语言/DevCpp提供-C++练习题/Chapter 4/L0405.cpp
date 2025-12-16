#include<bits/stdc++.h>
using namespace std;
class Base{
  public:
    Base()
    {
        cout << "Constructing base class\n";
    }
    ~Base()
    {
        cout << "Destructing base class\n";
    }
};
class Derived : public Base{
  public:
    Derived()
    {
        cout << "Constructing derived class" << endl;
    }
    ~Derived()
    {
        cout << "Destructing derived class" << endl;
    }
};
int main()
{
    Derived obj;
    return 0;
} 
