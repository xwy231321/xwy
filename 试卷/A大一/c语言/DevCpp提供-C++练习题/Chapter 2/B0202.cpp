#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n < 2)
        {
            cout << "Please reinput n(n>=2):";
        }
        else if(isPrime(n))
        {
            cout << n << " is a prime number." << endl;
            break;
        }
        else
        {
            cout << n << " is not a prime number." << endl;
            break;;
        }
    }
}