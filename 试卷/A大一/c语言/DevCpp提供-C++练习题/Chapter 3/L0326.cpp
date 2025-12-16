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
    void print()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Point p1(30,40);
    Point p2(p1);
    Point p3 = p1;
    p1.print();
    p1.print();
    p1.print();
    return 0;
}