#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2>
auto add(T1 a, T2 b)  -> decltype(a + b)
{
    return a + b;
}
int main() {
    double x, y;
    cin >> x >> y;
    auto result = add(x, y);
    cout << x << "+" << y << "=" << result << endl;
    return 0;
}
