#include<bits/stdc++.h>
using namespace std;
class Girl;
class Boy{
private:
    string name;
    int age;
public:
    Boy(string N,int A);
    friend void disp(const Girl& plg,const Boy& plb);
};
class Girl{
private:
    string name;
    int age;
public:
    Girl(string N,int A);
    friend void disp(const Girl &,const Boy &);
};
Girl::Girl(string N,int A)
{
    name = N;
    age = A;
}
Boy::Boy(string N,int A)
{
    name = N;
    age = A;
}
void disp(const Girl& plg,const Boy& plb)
{
    cout << "The girl's name is " << plg.name << ", age is " << plg.age << endl;
    cout << "The boy's name is " << plb.name << ", age is " << plb.age << endl;
}
int main()
{
    Girl g1("Li Mei",18);
    Boy b1("Wang Qiang",19);
    
    disp(g1,b1);
     
    return 0;
} 