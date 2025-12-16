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
        void show(){
            cout << "Graduate:" << name << ",subsidy=" << subsidy << endl;
        }
        void pay(){
            subsidy += days * 60; 
        }
};
class UnderGraduate : public Student{
    public:
        UnderGraduate(string n,int d,float s = 600):Student(n,d,s){}
        void show(){
            cout << "UnderGraduate:" << name << ",subsidy=" << subsidy << endl;
        }
        void pay(){
            subsidy += days * 50; 
        }
};
int main()
{
    Student *p;
    Graduate gs("LiuJirui",6);
    p=&gs;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴
    
    UnderGraduate ug("ZhouHaolu",10);
    p=&ug;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴

    return 0;
}