#include<bits/stdc++.h>
using namespace std;

class Complex {
public:
    Complex(int reall = 0, int imagl = 0);
    friend Complex operator+(Complex com, int a);
    friend Complex operator+(int a, Complex com);
    void print();

private:
    int real, imag;
};

Complex::Complex(int reall, int imagl) {
    real = reall;
    imag = imagl;
}

void Complex::print() {
    cout << "real=" << real << ",imag=" << imag << endl;
}

Complex operator+(Complex com, int a) {
    return Complex(com.real + a, com.imag);
}

Complex operator+(int a, Complex com) {
    return Complex(a + com.real, com.imag);
}
int main()
{
    double a,b;
    cin>>a>>b;
    Complex A1(a,b),A2;
    
    A2=A1+30;
    A2.print();
    A2=50+A1;
    A2.print();
}