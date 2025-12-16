#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
	double real;
	double imag;
public:
	Complex(double r = 0.0,double i = 0.0);
	double abscomplx();
    ~Complex()
    {
        cout << "Destructor called." << endl;
    }

};
Complex::Complex(double r,double i)
{
    real = r;
    imag = i;
    cout << "Constructor called." << endl;
}
double Complex::abscomplx()
{
    double t;
    t = real * real + imag * imag;
    return sqrt(t);
}
int main()
{
    double a,b;
    cin >> a >> b;
	Complex S(a,b);
	cout << fixed << setprecision(3) << S.abscomplx() << endl;
}