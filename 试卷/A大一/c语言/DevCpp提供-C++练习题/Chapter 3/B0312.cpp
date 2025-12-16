#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string>arr(n);
	cin.ignore();
	for(int i = 0; i < n ; i ++)
	{
		string str;
		getline(cin,str);
		arr.push_back(str);
	}
	sort(arr.begin(),arr.end());
	for(int i = arr.size() - 1; i >= 0 ;i--)
	{
		cout << arr[i] << endl;
	}
	return 0;
}