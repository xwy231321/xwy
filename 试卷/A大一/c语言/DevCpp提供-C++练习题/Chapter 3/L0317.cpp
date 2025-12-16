#include<bits/stdc++.h>
using namespace std;
class exe{
private:
    int x;
public:
    void set_a(int a)
    {
        x = a;
    }
    void show_a()
    {
        cout << x << endl;
    }
};
int main()
{
    int a;
    cin >> a;
    exe ob;
    exe *p;
    ob.set_a(a);
    ob.show_a();
    p = &ob;
    p -> show_a();
    (*p).show_a();
    return 0;
}