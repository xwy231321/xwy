#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<double>arr(n);
	for(int i = 0; i < n ; i ++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	for(int i = arr.size() - 1; i >= 0 ;i--)
	{
		cout << arr[i] << " ";
	}
	return 0;
}