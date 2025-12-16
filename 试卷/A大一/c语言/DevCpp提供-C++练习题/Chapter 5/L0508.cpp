#include <bits/stdc++.h>
using namespace std;

class Three {
public:
    Three(int i1 = 0, int i2 = 0, int i3 = 0);
    void print();
    Three operator--();
    Three operator--(int);

private:
    int i1, i2, i3;
};

Three::Three(int I1, int I2, int I3) {
    i1 = I1;
    i2 = I2;
    i3 = I3;
}

void Three::print() {
    cout << "a=" << i1 << ",b=" << i2 << ",c=" << i3 << endl;
}

Three Three::operator--() {
    --i1;
    --i2;
    --i3;
    return *this;
}

Three Three::operator--(int) {
    Three temp(*this);
    i1--;
    i2--;
    i3--;
    return temp;
}

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2,t3(b1,b2,b3),t4;
    
    t1.print();
    --t1;
    t1.print();
    t2=t1--;
    t2.print();
    t1.print();
    cout<<endl;
    t3.print();
    t3.operator--();
    t3.print();
    t4=t3.operator--(0);
    t4.print();
    t3.print();
    
    return 0;
}