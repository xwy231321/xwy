#include<bits/stdc++.h>
using namespace std;
template <typename T1,typename T2>
class Base{
protected:
    T1 a;
    T2 b;
public:
    Base(T1 aa,T2 bb):a(aa),b(bb){}
    void show()
    {
        cout << "Base a=" << a << ",b=" << b << endl;
    }
};
class Derive : public Base<float,int>{
private:
    int c;
public:
    Derive(float aa = 3.3,int bb = 4.4,int cc = 5.5):Base<float,int>(aa,bb),c(cc){}
    void show()
    {
        cout << "Derive a=" << a << ",b=" << b << ",c=" << c << endl;
    }
};
int main()
{
    Base<int,int> aa(1,2);
    aa.show();
    Base<int,float> bb(3,7.7);
    bb.show();
    Base<float, char> cc(3.3,'T');
    cc.show();
    

    Derive dd(3.14,2,5),dt;
    dd.show();
    dt.show();
    
    return 0;
}