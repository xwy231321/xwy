#include <iostream>

using namespace std;

class Three {
public:
    Three(int i1, int i2, int i3);
    void print();
    friend Three operator++(Three& op);
    friend Three operator++(Three& op, int);

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

Three operator++(Three& op) {
    ++op.i1;
    ++op.i2;
    ++op.i3;
    return op;
}

Three operator++(Three& op, int) {
    Three temp(op);
    op.i1++;
    op.i2++;
    op.i3++;
    return temp;
}

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2(b1,b2,b3);
    
    t1.print();
    ++t1;
    t1.print();
    t1++;
    t1.print();
    cout<<endl;
    t2.print();
    operator++(t2);
    t2.print();
    operator++(t2,0);
    t2.print();
    
    return 0;
}