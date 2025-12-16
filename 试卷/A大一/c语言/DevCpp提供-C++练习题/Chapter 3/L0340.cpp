#include<bits/stdc++.h>
using namespace std;
class Sample{
private:
    int n;
public:
    int m;
    Sample(int i,int j)
    {
        m = i;
        n = j;
    }
    void setvalue(int i)
    {
        n = i;
    }
    void disply()
    {
        cout << "m=" << m << endl;
        cout << "n=" << n << endl;
    }
};
int main()
{
    Sample a(10,20);
    a.setvalue(40);
    a.m = 30;
    a.disply();
    return 0;
}