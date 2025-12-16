#include<bits/stdc++.h>
using namespace std;
class Date{
  public:
    Date();
    Date(int y,int m,int d);
    void showDate();
  private:
    int year;
    int month;
    int day;
};
Date::Date()
{
    year = 2016;
    month = 3;
    day = 8;
}
Date::Date(int y,int m,int d)
{
    year = y;
    month = m;
    day = d;
}
inline void Date::showDate()
{
    cout << year << "." << month << "." << day << endl;
}
int main()
{
    Date date1;
    cout << "Date1 output:" << endl;
    date1.showDate();
    int a,b,c;
    cin >> a >> b >> c;
    Date date2(a,b,c);
    cout << "Date2 output:" << endl;
    date2.showDate();
    return 0;
}