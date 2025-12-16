#include<iostream>
using namespace std;
int &max(int &num1,int &num2)
{
	return (num1 > num2) ? num1 : num2;
}
int &min(int &num1,int &num2)
{
	return (num1 < num2) ? num1 : num2;
}
int main()
{
	int num1,num2;
	cin >> num1 >> num2;
	max(num1,num2) = 0;
	cout << num1 << "," << num2 << endl;
	cin >> num1 >> num2;
	min(num1,num2) = 0;
	cout << num1 << "," << num2 << endl;
	return 0;
}