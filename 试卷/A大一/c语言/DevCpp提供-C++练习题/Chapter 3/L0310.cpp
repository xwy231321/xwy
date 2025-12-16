#include <iostream>

using namespace std;

class Location {
private:
    int X;
public:
    int Y;

    Location() { 
        X = 0;
        Y = 0;
    }

    Location(int m, int n) {
        X = m;
        Y = n;
    }

    void Init(int initx, int inity) {
        X = initx;
        Y = inity;
    }

    int GetX() {
        return X;
    }

    int GetY() {
        return Y;
    }
};

int main() {
    Location A3;
    A3.Init(785, 980);
    cout << A3.GetX() << " " << A3.GetY() << endl;
    return 0;
}