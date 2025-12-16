#include<bits/stdc++.h>
using namespace std;
class Base{
  private:
    int x;
  public:
    Base(int i)
    {
        x = i;
        cout << "Constructing class Base.\n";
    }
    ~Base()
    {
        cout << "Destructing class Base.\n";
    }
    void show()
    {
        cout << "x=" << x << endl;
    }
};
class Derived : public Base{
  private:
    Base d;
  public:
    Derived(int i):Base(i),d(i)
    {
        cout << "Constructing derived class." << endl;
    }
    ~Derived()
    {
        cout << "Destructing derived class." << endl;
    }
};
int main()
{
    Derived obj(5);
    obj.show();        
    return 0;
} 