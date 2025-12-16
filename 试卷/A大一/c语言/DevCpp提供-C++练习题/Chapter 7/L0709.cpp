#include <iostream>

using namespace std;

class Three_d {
public:
    Three_d(int a, int b, int c) : x(a), y(b), z(c) {}
    friend ostream& operator<<(ostream& output, Three_d& ob);
    friend istream& operator>>(istream& input, Three_d& ob);

private:
    int x, y, z;
};

ostream& operator<<(ostream& output, Three_d& ob) {
    output << ob.x << ",";
    output << ob.y << ",";
    output << ob.z << endl;
    return output;
}

istream& operator>>(istream& input, Three_d& ob) {
    cout << "Enter x,y,z value:";
    input >> ob.x;
    input >> ob.y;
    input >> ob.z;
    return input;
}

int main() {
    Three_d obj(10, 20, 30);
    cout << obj;
    cin >> obj;
    cout << obj;
    return 0;
}