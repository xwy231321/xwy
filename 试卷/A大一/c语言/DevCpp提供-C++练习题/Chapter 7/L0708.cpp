#include <iostream>

using namespace std;

class Coord {
public:
    Coord(int i = 0, int j = 0) {
        x = i;
        y = j;
    }
    friend ostream& operator<<(ostream& stream, Coord& ob);

private:
    int x, y;
};

ostream& operator<<(ostream& stream, Coord& ob) {
    stream << ob.x << "," << ob.y << endl;
    return stream;
}

int main() {
    Coord a(55, 66), b(100, 200);
    cout << a << b;
    return 0;
}