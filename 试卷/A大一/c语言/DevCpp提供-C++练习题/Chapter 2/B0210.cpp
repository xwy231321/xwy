#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n < 2)
        {
            cout << "Please reinput n(n>=2):" << endl;
            cin >> n;
        }
        int* p = new int[n];
        p[0] = 1;
        p[1] = 1;
        for (int i = 2; i < n; ++i)
        {
            p[i] = p[i - 1] + p[i - 2];
        }
        for (int i = 0; i < n; ++i) {
            cout << p[i] << endl;
        }
        delete[] p;
        return 0;
    }
    return 0;
}