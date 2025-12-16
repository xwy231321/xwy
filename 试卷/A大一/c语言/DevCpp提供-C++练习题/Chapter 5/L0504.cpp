#include<bits/stdc++.h>
using namespace std;

class Coord {
public:
    Coord(int i = 0, int j = 0) {
        x = i;
        y = j;
    }
    void print() {
        cout << "x:" << x << ",y:" << y << endl;
    }
    friend Coord operator++(Coord& op);

private:
    int x, y;
};

Coord operator++(Coord& op) {
    ++op.x;
    ++op.y;
    return op;
}

int main()
{
    int a,b;
    cin>>a>>b;
    Coord ob1(a,b);
    ob1.print();
    ++ob1;
    ob1.print();

    operator++(ob1);
    ob1.print();
    
    return 0;
}