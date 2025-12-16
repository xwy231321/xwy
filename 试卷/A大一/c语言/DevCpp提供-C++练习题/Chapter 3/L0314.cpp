#include<bits/stdc++.h>
using namespace std;
class exam{
private:
    int x;
public:
    exam(int n)
    {
        x = n;
    }
    int get_x()
    {
        return x;
    }
};
int main()
{
    exam ob[4] = {11,22,33,44};
    for(int i = 0 ; i < 4 ; i++)
    {
        cout << ob[i].get_x() << " ";
    }
    return 0;
}