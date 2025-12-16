#include <iostream>

using namespace std;
template <typename AT>
AT Max(AT x, AT y) {
    return (x > y) ? x : y;
}

int Max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int i1 = 10, i2 = 20;
    double d1 = 20.2, d2 = 0.0;
    char c1 = 'j', c2 = 'a';
    cout << "Calling ordinary function:max(int):" << Max(i1, i2) << endl;
    cout << "Calling template function:max(double):" << Max(d1, d2) << endl;
    cout << "Calling template function:max(char):" << Max(c1, c2) << endl;
    return 0;
}