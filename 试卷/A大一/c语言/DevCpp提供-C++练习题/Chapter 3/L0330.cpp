#include<bits/stdc++.h>
using namespace std;
class myclass{
public:
    static int i;
    int geti()
    {
        return i;
    }
};
int myclass::i = 0;
int main()
{
    myclass::i = 200;
    myclass ob1,ob2;
    cout << "ob1.i=" << ob1.geti() << endl;
    cout << "ob2.i=" << ob2.geti() << endl;
    ob1.i = 300;
    cout << "ob1.i=" << ob1.geti() << endl;
    cout << "ob2.i=" << ob2.geti() << endl;
    return 0;
}