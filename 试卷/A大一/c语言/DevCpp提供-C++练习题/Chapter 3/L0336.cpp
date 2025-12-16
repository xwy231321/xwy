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
    cout << "The boy's name is " << plb.name << ", and his age is " << plb.age << "." <<endl;
    cout << "The girl's name is " << plg.name << ", and her age is " << plg.age <<  "." << endl;
}
int main()
{
    Girl g1("Mary",18);
    Boy b1("Tom",19);
    
    disp(g1,b1);
     
    return 0;
} 