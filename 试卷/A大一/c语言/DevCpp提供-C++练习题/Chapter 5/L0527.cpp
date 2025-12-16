#include <iostream>

using namespace std;

class Basel {
public:
    virtual void fun() {
        cout << "--Basel--\n";
    }
};

class Base2 {
public:
    void fun() {
        cout << "--Base2--\n";
    }
};

class Derived : public Basel, public Base2 {
public:
    void fun() {
        cout << "--Derived--\n";
    }
};

int main() {
    Basel* ptr1;
    Base2* ptr2;
    Derived obj3;
    ptr1 = &obj3;
    ptr1->fun();
    ptr2 = &obj3;
    ptr2->fun();
    return 0;
}