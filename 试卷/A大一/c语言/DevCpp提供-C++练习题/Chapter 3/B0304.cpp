#include <iostream>
using namespace std;
class AA {
private:
    int a, b, c;
public:
    AA(int a, int b, int c) : a(a), b(b), c(c) {}
    friend int add(const AA& obj);
};
int add(const AA& obj) {
    return obj.a + obj.b + obj.c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    AA a1(a, b, c);
    cout << add(a1) << endl;
    return 0;
}