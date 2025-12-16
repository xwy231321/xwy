#include <iostream>

using namespace std;

class Complex {
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    operator double() {
        return real;
    }
    operator int() {
        return int(real);
    }

private:
    double real, imag;
};

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    
    Complex com1(a,b);
    cout<<"Complex-->double:";
    cout<<double(com1)<<endl;
    Complex com2(c,d);
    cout<<"Complex-->int:";
    cout<<int(com2)<<endl;
    
    return 0;
}