#include<bits/stdc++.h>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point(int a,int b)
    {
        x = a;
        y = b;
    }
    Point(const Point &p)
    {
        x = 2 * p.x;
        y = 2 * p.y;
    }
    void print()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    int a,b;
    cin >> a >> b;
    Point p1(a,b);
    Point p2(p1);
    //p1.print();
    p2.print();
    return 0;
}