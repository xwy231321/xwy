#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double *p = new double[n];
    double sum = 0.0;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> p[i];
    }
    for(int i = 0; i < n ;i++)
    {
        sum += p[i];
    }
    sum /= n;
    cout << "aver=" << sum << endl;
    delete []p;
    return 0;
}