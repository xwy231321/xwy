#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0.0, num = 2.0, den = 1.0, temp = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += num / den;
        temp = num;
        num += den;
        den = temp;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}