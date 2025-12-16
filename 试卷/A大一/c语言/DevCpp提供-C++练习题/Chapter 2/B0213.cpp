#include <iostream>
using namespace std;
double max(double a,double b)
{
    return a>b ? a : b;
}
int main()
{
    double a, b, m;
    cin >> a >> b;
    m = max(a, b);
    cout << "max=" << m << endl;
    return 0;
}