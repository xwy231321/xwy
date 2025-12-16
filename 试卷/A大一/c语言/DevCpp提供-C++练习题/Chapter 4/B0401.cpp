#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
        string name;
        char sex;
        int age;
        
    public:
        Person(string n = "NoName",char se = 'M',int a = 0):name(n),sex(se),age(a)
        {
            cout << "Person()..." << endl;
        }
        ~Person()
        {
            cout << "~Person()..." << endl;
        }
        void print()
        {
            cout << name << "," << sex << "," << age << endl;
        }
};
class Student : public Person{
    protected:
        string univ;
        int score;
    public:
        Student(string n,char se,int a,string u,int sc):Person(n,se,a),univ(u),score(sc)
        {
            cout << "Student()..." << endl;
        }
        ~Student()
        {
            cout << "~Student()..." << endl;
        }
        void print()
        {
            //cout << name << "," << sex << "," << age << endl;
            Person::print();
            cout << univ << "," << score << endl;
        }
};
int main()
{
    Person p1;
    Student wjz("WangJingzhuo",'M',19,"HUE",90);
    p1.print();
    wjz.print();
    return 0;
} 