#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
	Complex(double r = 0.0,double i = 0.0);
	double abscomplx();
private:
	double real;
	double imag;
};
Complex::Complex(double r,double i)
{
    real = r;
    imag = i;
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
	Complex S1;
    cout << S1.abscomplx() << endl;
	Complex S2(1.1);
    cout << fixed << setprecision(4) << S2.abscomplx() << endl;
	Complex S3(a,b);
	cout << fixed << setprecision(4) << S3.abscomplx() << endl;
}