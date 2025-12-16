#include <iostream>
using namespace std;
class MyClass {
public:
    int i;
    int j;

    void op1() {
        cout << "op1 i=" << i << " j=" << j << endl;
    }

    void op2() {
        cout << "op2 i=" << i << " j=" << j << endl;
    }
};

int main() {
    int val1, val2, val3, val4;
    cin >> val1 >> val2 >> val3 >> val4;

    MyClass obj1;
    obj1.i = val1;
    obj1.j = val2;
    obj1.op1();

    MyClass obj2;
    obj2.i = val3;
    obj2.j = val4;
    obj2.op2();

    return 0;
}