#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a = 1;
	double b = 1;
	for(int i = 1;i <= 365;i++)
	{
		a *= 1.01;
		b *= 0.99;
	}
	double ans = a / b;
	cout << fixed << setprecision(3) << ans << endl; 
}
