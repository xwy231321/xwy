#include<bits/stdc++.h>
using namespace std;
class timer{
private:
    int seconds;
public:
    timer()
    {
        seconds = 0;
    }
    timer(char* t)
    {
        seconds = atoi(t);
    }
    timer(int t)
    {
        seconds = t;
    }
    timer(int min,int sec)
    {
        seconds = min * 60 + sec;
    }
    int gettime()
    {
        return seconds;
    }
};
int main()
{
    int x,y;
    cin >> x >> y;
    timer a;
    timer b(10);
    timer c("20");
    timer d(x,y);
    cout << "seconds1=" << a.gettime() << endl;
    cout << "seconds2=" << b.gettime() << endl;
    cout << "seconds3=" << c.gettime() << endl;
    cout << "seconds4=" << d.gettime() << endl;
    return 0;
}