#include <iostream>
using namespace std;
template <typename T1, typename T2> 
class Myclass {                                                                                                                                                                    // 定义 类 模板 Myclass
public:
    Myclass(T1 a, T2 b) {
        i = a;
        j = b;
    }
    void show() {
        cout << "i=" << i << ",j=" << j << endl;
    }

private:
    T1 i;
    T2 j;
};

int main() {
    Myclass<int, double> obl(12, 3.4);
    Myclass<char, char*> ob2('x', "Have a brilliant day!");
    obl.show();
    ob2.show();
    return 0;
}