#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Base {
protected:
    T a, b;
public:
    Base(T aa, T bb) : a(aa), b(bb) {}
    void show(){
        cout << "Base a=" << a << ",b=" << b << endl;
    }
};

class Derive : public Base<double> {
protected:
    double c;
public:
    Derive(double aa = 3.3, double bb = 4.4,double cc = 5.5) : Base<double>(aa, bb),c(cc){}
    void show() {
        cout << "Derive a=" << a << ",b=" << b << ",c=" << c << endl;
    }
};
int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72),dt;
    dd.show();
    dt.show();
    
    return 0;
}