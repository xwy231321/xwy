#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator*(const Complex other)
    {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        return Complex(r,i);
    }
    void print()
    {
        if (real == 0 && imag == 0) {
            cout << "(0)";
        } else if (real == 0) {
            cout << "(" << imag << "i)";
        } else if (imag == 0) {
            cout << "(" << real << ")";
        } else {
            cout << "(" << real;
            if (imag > 0) {
                cout << "+" << imag << "i)";
            } else {
                cout << imag << "i)";
            }
        }
    }
};

int main()
{
    double a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    Complex A1(a1,a2),A2(b1,b2),A3;
    
    A3=A1*A2;
    A1.print();
    cout<<"*";
    A2.print();
    cout<<"=";
    A3.print();
}