#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2, typename T3>
auto sum(T1 a, T2 b, T3 c)  -> decltype(a * b * c)
{
    return a * b * c;
}
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    auto result = sum(x, y, z);
    cout << result << endl;
    return 0;
}