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

private:
    double real, imag;
};

int main()
{
    Complex com1(2.2,4.4);
    cout<<"Complex-->double"<<endl;
    cout<<double(com1)<<endl;
    
    return 0;
}