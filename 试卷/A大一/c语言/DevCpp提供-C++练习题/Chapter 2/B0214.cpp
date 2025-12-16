#include<bits/stdc++.h>
using namespace std;
inline double max(double a,double b,double c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else return c;
}
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    cout << "max=" << max(a,b,c) << endl;
}