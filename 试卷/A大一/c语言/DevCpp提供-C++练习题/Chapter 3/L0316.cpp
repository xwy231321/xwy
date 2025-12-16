#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0,double i = 0.0)
    {
        real = r;
        imag = i;
    }
    ~Complex()
    {
        cout << "Destructor called." << endl;
    }
    double abscomplex()
    {
        double t;
        t = real * real + imag * imag;
        return sqrt(t);
    }
};
int main()
{
    double a,b;
    cin >> a >> b;
    Complex com[3] = {
        Complex(a,b),
        Complex(3.3,4.4),
        Complex(5.5,6.6)
    };    
    cout << fixed << setprecision(4) << com[0].abscomplex() << endl;
    cout << fixed << setprecision(4) << com[1].abscomplex() << endl;
    cout << fixed << setprecision(4) << com[2].abscomplex() << endl;
    return 0;
}