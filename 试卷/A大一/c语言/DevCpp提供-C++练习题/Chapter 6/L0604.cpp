#include <iostream>

using namespace std;

template <typename Type>
Type Max(Type x, Type y) {
    return (x > y) ? x : y;
}

template <typename Type>
Type Max(Type x, Type y, Type z) {
    Type t;
    t = (x > y) ? x : y;
    return (t > z) ? t : z;
}

int main() {
    int m = 10, n = 20, Max2;
    double a = 10.1, b = 20.2, c = 30.3, Max3;
    Max2 = Max(m, n);
    Max3 = Max(a, b, c);
    cout << "max(" << m << "," << n <<")=" << Max2 << endl;
    cout << "max(" << a << "," << b << "," << c << ")=" << Max3 << endl;
    return 0;
}