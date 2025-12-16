#include<bits/stdc++.h>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    Complex(double r = 0, double i = 0){
        real = r;
        imag = i;
    }
};

Complex operator+(Complex co1, Complex co2){
    Complex temp;
    temp.real = co1.real + co2.real;
    temp.imag = co1.imag + co2.imag;
    return temp;
}

int main() {
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    Complex com1(a,b), com2(c,d), total1, total2;
    total1 = operator+(com1, com2);
    cout << "real1=" << total1.real << " " << "imag1=" << total1.imag << endl;
    total2 = com1 + com2;
    cout << "real2=" << total2.real << " " << "imag2=" << total2.imag << endl;
    return 0;
}