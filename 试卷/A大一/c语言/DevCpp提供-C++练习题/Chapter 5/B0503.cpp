#include<bits/stdc++.h>
using namespace std;
class Student{
    protected:
        string name;
        int days;
        float subsidy;
    public:
        Student(string n,int d,float s):name(n),days(d),subsidy(s){}
        virtual void show() = 0;
        virtual void pay() = 0;
};
class Graduate : public Student{
    public:
        Graduate(string n,int d,float s = 1000):Student(n,d,s){}
        virtual void show(){
            cout << "Graduate:" << name << ",subsidy=" << subsidy << endl;
        }
        virtual void pay(){
            subsidy += 60 * days;
        }
};
class UnderGraduate : public Student{
    public:
        UnderGraduate(string n,int d,float s = 600):Student(n,d,s){}
        virtual void show(){
            cout << "UnderGraduate:" << name << ",subsidy=" << subsidy << endl;
        }
        virtual void pay(){
            subsidy += 50 * days;
        }
};
int main()
{
    Student *p;

    char name1[20]; 
    int day1;
    cin>>name1>>day1; //输入某研究生的姓名和助工天数 
    Graduate gs(name1,day1); //构造研究生对象 
    p=&gs;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 
    
    char name2[20];
    int day2;
    cin>>name2>>day2; //输入某本科生的姓名和助工天数 
    UnderGraduate ug(name2,day2); //构造本科生对象
    p=&ug;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 

    return 0;
}