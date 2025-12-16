#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
	return a * b;
}
int sum(int a,int b,int c)
{
	return a * b * c;
}
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	cout << x << "*" << y << "=" << sum(x,y) << endl;
	cout << x << "*" << y << "*" << z << "=" << sum(x,y,z) << endl;
}