#include<bits/stdc++.h>
using namespace std;
void swap(int& m,int& n)
{
	int temp = n;
	n = m;
	m = temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a="<<a<<",b="<<b<<endl;
    swap(a,b);
    cout<<"After swap:";
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
 } 