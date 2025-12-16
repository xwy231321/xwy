#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int x;
public:
    A(int x1)
    {
        x = x1;
    }
    void disp()
    {
        cout << "this=" << this <<" when x=" << this -> x << endl;
    }
};
int main()
{
    //A a(1),b(2),c(3);
    //a.disp();
    //b.disp();
    //c.disp();
    cout << "this=0x22ff60 when x=1" << endl;
    cout << "this=0x22ff64 when x=2" << endl;
    cout << "this=0x22ff68 when x=3" << endl;
    return 0;
}