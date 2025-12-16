#include<bits/stdc++.h>
using namespace std;
int sum(const int& a,const int& b)
{
	return a + b;
}
int main()
{
	int a,b;
	cin >> a >> b;
	cout << a << "+" << b << "=" << sum(a,b);
}