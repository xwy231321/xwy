#include<bits/stdc++.h>
using namespace std;
class Base{
private:
	int x;
public:
	void setx(int n)
	{
		x = n;
	}
	void showx()
	{
		cout << x << endl;
	}
};
class Derived:private Base{
private:
	int y;
public:
	void setxy(int n,int m)
	{
		setx(n);
		y = m;
	}
	void showxy()
	{
		//cout << x;
		showx();
		cout << y << endl;
	}
};