#include<bits/stdc++.h>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point(int xx,int yy):x(xx),y(yy){}
    void show()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    bool operator>(const Point&other){
        return (x*x + y*y) > (other.x * other.x + other.y * other.y);
    }
};
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Point p1(a,b),p2(c,d);
    p1.show();
    p2.show();
    if(p1>p2) cout<<"p1>p2"<<endl;
    else cout<<"p1<=p2"<<endl;
    return 0;
}