#include<bits/stdc++.h>
using namespace std;
class Complex {
public:
    Complex(double r = 0.0, double i = 0.0);
    void print();
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    Complex operator/(Complex c);

private:
    double real;
    double imag;
};

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

Complex Complex::operator+(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

Complex Complex::operator-(Complex c) {
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}

Complex Complex::operator*(Complex c) {
    Complex temp;
    temp.real = real * c.real - imag * c.imag;
    temp.imag = real * c.imag + imag * c.real;
    return temp;
}

Complex Complex::operator/(Complex c) {
    Complex temp;
    double t;
    t = 1 / (c.real * c.real + c.imag * c.imag);
    temp.real = (real * c.real + imag * c.imag) * t;
    temp.imag = (c.real * imag - real * c.imag) * t;
    return temp;
}

void Complex::print() {
    if(real != 0)
    {
        cout << real;
    }
    else cout << real << endl;
    if (imag > 0) cout << "+" ;
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