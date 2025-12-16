#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, n;
    cin >> a >> n;
    long long sum = 0;
    long long term = 0;

    for (int i = 0; i < n; ++i) {
        term = term * 10 + a;
        sum += term;
    }
    cout << sum << endl;

    return 0;
}