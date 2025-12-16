#include <iostream>

using namespace std;

class Complex {
public:
    Complex() {}
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    Complex(double r) {
        real = r;
        imag = 0;
    }
    friend Complex operator+(Complex& col, Complex& co2);
    void print();

private:
    double real;
    double imag;
};

Complex operator+(Complex& col, Complex& co2) {
    Complex temp;
    temp.real = col.real + co2.real;
    temp.imag = col.imag + co2.imag;
    return temp;
}

void Complex::print() {
    cout << real;
    if (imag > 0) cout << "+";
    if (imag != 0) cout << imag << "i" << endl;
}

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Complex com1(a,b),total;
    Complex com2(c);
    total=com1+com2;
    total.print();
    
    return 0;
}