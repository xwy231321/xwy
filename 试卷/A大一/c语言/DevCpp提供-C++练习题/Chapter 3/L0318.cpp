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
        cout << "x=" << x << endl;
    }
};
int main()
{
    A a(1),b(2);
    cout << "a:";
    a.disp();
    cout << "b:";
    b.disp();
    return 0;
}