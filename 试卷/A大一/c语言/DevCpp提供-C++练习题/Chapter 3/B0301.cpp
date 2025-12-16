#include <iostream>
using namespace std;
class Point {
public:
    Point(int x = 0, int y = 0) : x(x), y(y)
	{
        cout << "Constructing...(" << x << "," << y << ")" << endl;
    }
    Point(const Point& p) : x(p.x), y(p.y)
	{
        cout << "Copy Constructing...(" << x << "," << y << ")" << endl;
    }
    void display()
	{
        cout << "(" << x << "," << y << ")" << endl;
        
    }

    int x, y;
};

Point add(Point p1, Point p2) {
    Point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;
    return sum; 
}
int main()
{
    int x1,y1,x2,y2;
    
    cin>>x1>>y1>>x2>>y2;
    
    Point p1(x1,y1),p2(x2,y2); //输出Constructing...(1,2) \n Constructing...(3,4) 
    Point p3; //输出Constructing...(0,0) 
    
    p3=add(p1,p2); //输出Copy Constructing...(3,4) \n Copy Constructing...(1,2) \n Constructing...(0,0) 
    
    Point p4=p3;
    
	p4.display(); //输出Copy Constructing...(4,6) \n (4,6) 
    
    return 0;
}
