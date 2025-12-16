#include<bits/stdc++.h>
using namespace std;
class Add{
private:
    int x;
    int y;
public:
    Add(int a,int b)
    {
        x = a;
        y = b;
    }
    void solution();
};
void Add::solution()
{
    cout << x << "+" << y << "=" << x+y;
}
int main()
{
    int a,b;
    cin >> a >> b;
    Add a1(a,b);
    a1.solution();
    return 0;
}