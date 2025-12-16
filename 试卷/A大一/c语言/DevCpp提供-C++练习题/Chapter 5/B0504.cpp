#include<bits/stdc++.h>
using namespace std;
class MMars{
protected:
    float x,y;
public:
    MMars(float xx = 0,float yy = 0):x(xx),y(yy){}
    void print()
    {
        cout << "x=" << x << ",y=" << y << endl;
    }
    friend MMars operator++(MMars &obj);
    friend MMars operator++(MMars &obj,int);
};
MMars operator++(MMars &obj)
{
    obj.x += 7;
    obj.y += 7;
    return obj;
}
MMars operator++(MMars &obj,int)
{
    MMars temp = obj;
    obj.x += 7;
    obj.y += 7;
    return temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    MMars m1(a,b),m2,m3;

    m2=++m1;
    m1.print();
    m2.print();
    
    m3=m1++;
    m1.print();
    m3.print();
    return 0;
}
