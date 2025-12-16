#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
	double real;
	double imag;
public:
	void init(double r,double i)
	{
		real = r;
		imag = i;
	}
	double abscomplx()
	{
		double t;
		t = real * real + imag * imag;
		return sqrt(t);
	}
};
int main()
{
	Complex A;
	double a,b;
	cin >> a >> b;
	A.init(a,b);
	cout << A.abscomplx() << endl;
}