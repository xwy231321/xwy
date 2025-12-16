#include<bits/stdc++.h>
using namespace std;

class Coord {
public:
    Coord(int x1 = 0, int y1 = 0) {
        x = x1;
        y = y1;
    }
    friend Coord operator-(Coord& obj);
    void print();

private:
    int x, y;
};

Coord operator-(Coord& obj) {
    obj.x = -obj.x;
    obj.y = -obj.y;
    return obj;
}

void Coord::print() {
    cout << "x=" << x << ",y=" << y << endl;
}

int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob1(x,y),ob2;
    ob1.print();
    ob2=-ob1;
    ob2.print();
    return 0;
}