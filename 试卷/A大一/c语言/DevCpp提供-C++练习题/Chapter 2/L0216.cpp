#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *p;
	p = new int(99);
	cout << "*p=" << *p;
	delete p;
	return 0;
}