#include<bits/stdc++.h>
using namespace std;
class Girl{
private:
    string name;
    int age;
public:
    Girl(string n,int d)
    {
        name = n;
        age = d;
    }
    friend void disp(Girl &);
};
void disp(Girl &x)
{
    cout <<"The girl's name is " << x.name << ", age is " << x.age << ".";
}
int main()
{
    string str1;
    int age1;
    getline(cin,str1);
    cin >> age1;
    Girl g1(str1,age1);
    disp(g1);
    return 0;
}