#include<bits/stdc++.h>
using namespace std;
inline int sum(const int& a,const int& b,const int& c)
{
	return a * b * c;
}
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	cout << a << "*" << b << "*" << c << "=" << sum(a,b,c);
}