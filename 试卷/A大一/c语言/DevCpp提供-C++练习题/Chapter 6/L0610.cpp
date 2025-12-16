#include <iostream>
using namespace std;
int Div(int x, int y);
int main() {
    cout << "7/3=" << Div(7, 3) << endl;
    cout << Div(5, 0) << endl;
    return 0;
}
int Div(int x, int y)
{
    if (y == 0) {
        cout << "Wrong: Diveded by zero!" << endl;
        exit(0);
    }
    return x / y;
}