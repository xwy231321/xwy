#include<bits/stdc++.h>
using namespace std;
int avar;
int main()
{
        int avar;
        cin >> avar;
	::avar = 10;
	cout << "local avar="  << avar << endl;
	cout << "global avar=" << ::avar << endl;
        return 0;
}