#include <iostream>

using namespace std;

class Complex {
public:
    Complex() {}
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    Complex(int i) {
        real = i / 2;
        imag = i / 2;
    }
    operator int() {
        return real + imag;
    }
    void print() {
        cout << "real=" << real << ",imag=" << imag << endl;
    }

private:
    int real, imag;
};

int main()
{
    Complex com1(1.1,2.2),com2(3.3,4.4),com3;
    com3=com1+com2;
    com3.print();
    return 0;
}
