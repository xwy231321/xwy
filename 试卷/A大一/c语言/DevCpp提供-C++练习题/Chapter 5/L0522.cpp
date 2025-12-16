#include <iostream>

using namespace std;

class B0 {
public:
    virtual void print(char* p) {
        cout << p << "print()" << endl;
    }
};

class B1 : public B0 {
public:
    virtual void print(char* p) {
        cout << "B1:" << p << "print()" << endl;
    }
};

class B2 : public B1 {
public:
    virtual void print(char* p) {
        cout<< "B2:" << p << "print()" << endl;
    }
};

int main()
{
    B0 ob0, *op;
    ob0.print("B0:");
    B1 ob1;
    ob1.print("B1:");
    B2 ob2;
    ob2.print("B2:");
        
    return 0;
}