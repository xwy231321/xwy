#include<bits/stdc++.h>
using namespace std;
ostream &output1(ostream &stream)
{
    stream.setf(ios::left);
    stream << setw(10) << hex << setfill('&');
    return stream;
}
int main()
{
    int a;
    cin >> a;
    cout << a << endl;
    cout << output1 << a << endl;
    return 0;
}