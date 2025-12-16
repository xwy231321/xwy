#include <iostream>

using namespace std;

template <typename typel, typename type2>
void myfunc(typel x, type2 y) {
    cout << x << " " << y << endl;
}

int main() {
    myfunc(10, "hao");
    myfunc(0.123, 10L);
    return 0;
}