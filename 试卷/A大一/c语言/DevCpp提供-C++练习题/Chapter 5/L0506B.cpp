#include <bits/stdc++.h>
using namespace std;

class Coord {
public:
    Coord(int i = 0, int j = 0);
    void print();
    Coord operator++();
    Coord operator++(int); // Postfix increment

private:
    int x, y;
};

Coord::Coord(int i, int j) {
    x = i;
    y = j;
}

void Coord::print() {
    cout << "x=" << x << ",y=" << y << endl;
}

Coord Coord::operator++() {
    ++x;
    ++y;
    return *this;
}

Coord Coord::operator++(int) {
    Coord temp = *this;
    ++x;
    ++y;
    return temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    Coord ob(x, y);
    ob.print();
    Coord ob2;
    ob2 = ob++;
    ob2.print();
    ob.print();
    return 0;
}