#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
    Complex(double r = 0.0, double i = 0.0);
    void print();
    friend Complex operator+(Complex& a, Complex& b);
    friend Complex operator-(Complex& a, Complex& b);
    friend Complex operator*(Complex& a, Complex& b);
    friend Complex operator/(Complex& a, Complex& b);

private:
    double real;
    double imag;
};

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

Complex operator+(Complex& a, Complex& b) {
    Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return temp;
}

Complex operator-(Complex& a, Complex& b) {
    Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;
}

Complex operator*(Complex& a, Complex& b) {
    Complex temp;
    temp.real = a.real * b.real - a.imag * b.imag;
    temp.imag = a.real * b.imag + a.imag * b.real;
    return temp;
}

Complex operator/(Complex& a, Complex& b) {
    Complex temp;
    double t;
    t = 1 / (b.real * b.real + b.imag * b.imag);
    temp.real = (a.real * b.real + a.imag * b.imag) * t;
    temp.imag = (b.real * a.imag - a.real * b.imag) * t;
    return temp;
}

void Complex::print() {
    cout << real;
    if (imag > 0) cout << "+";
    if (imag != 0) cout << imag << "i" << endl;
}
int main()
{
    double a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    Complex A1(a1,a2),A2(b1,b2),A3,A4,A5,A6;
    A3=A1+A2;
    A4=A1-A2;
    A5=A1*A2;
    A6=A1/A2;
    A1.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print(); 
    return 0;
}