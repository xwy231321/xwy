#include<bits/stdc++.h>
using namespace std;
class Base{
protected:
    int x;
public:
    Base(int xx):x(xx){
        cout << "Base()..." << endl;
    }
    void print(){
        cout << "x=" << x << endl;
    }
};
class Base1 : public virtual  Base{
public:
    Base1(int xx):Base(xx){
        cout << "Base1()..." << endl;
    }
    void print(){
        cout << "x=" << x << endl;
    }
};
class Base2 : public virtual  Base{
public:
    Base2(int xx):Base(xx){
        cout << "Base2()..." << endl;
    }
    void print(){
        cout << "x=" << x << endl;
    }
};
class Derive : public Base1,public Base2{
public:
    Derive(int xx):Base(xx),Base1(xx),Base2(xx){
        cout << "Derive()..." << endl;
    }
    void print(){
        cout << "x=" << x << endl;
    }
};
int main()
{
    Base1 b1(1);
    b1.print();
    Base2 b2(2);
    b2.print();
    Derive d(3);
    d.print();
    return 0;
}