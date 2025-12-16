#include <iostream>

using namespace std;

template <typename T>
class Compare {
public:
    Compare(T a, T b) {
        x = a;
        y = b;
    }
    T Max() {
        return (x > y) ? x : y;
    }

private:
    T x, y;
};

int main() {
    Compare<int> coml(3, 7);
    Compare<double> com2(0.00, 2.2);
    Compare<char> com3('a', 'm');
    cout << "max(int):" << coml.Max() << endl;
    cout << "max(double):" << com2.Max() << endl;
    cout << "max(char):" << com3.Max() << endl;
    return 0;
}