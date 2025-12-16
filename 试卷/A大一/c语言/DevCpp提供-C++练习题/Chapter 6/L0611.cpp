#include <iostream>

using namespace std;
int Div(int x, int y);
int main() {
    try {
        cout << "7/3=" << Div(7, 3) << endl;
        cout << Div(5, 0) << endl;
    } catch (int) {
        cout << "Wrong: Devided by zero!" << endl;
    }
    cout << "end" << endl;
    return 0;
}

int Div(int x, int y) {
    if (y == 0)
        throw y;
    return x / y;
}