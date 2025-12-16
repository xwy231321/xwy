#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, x, prev_x;
    const double epsilon = 1e-5;
    cin >> a;
    x = a;
    while (fabs(x - prev_x) >= epsilon)
    {
        prev_x = x;
        x = (x + a / x) / 2;
    }
    cout << fixed << setprecision(2) << x << endl;
    return 0;
}