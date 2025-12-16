#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
	return a * a;
}
double sum(double a)
{
	return a * a;
}
int main()
{
	int x;
	double y;
	cin >> x >> y;
	cout << x << "*" << x << "=" << sum(x) << endl;
	cout << y << "*" << y << "=" << sum(y) << endl;
        return 0;
}