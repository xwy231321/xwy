#include<bits/stdc++.h>
using namespace std;
class exam{
private:
    int x;
public:
    exam()
    {
        x = 123;
    }
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
    exam ob1[4] = {11,22,33,44};
    exam ob2[4] = {55,66};
    for(int i = 0 ; i < 4 ; i++)
    {
        cout << ob1[i].get_x() << " ";
    }
    cout << endl;
    for(int i = 0 ; i < 4 ; i++)
    {
        cout << ob2[i].get_x() << " ";
    }
    return 0;
}