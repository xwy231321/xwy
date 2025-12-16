#include<bits/stdc++.h>
using namespace std;
class Student{
  protected:
    int number;
    string name;
    float score;
  public:
    Student(int number1,string name1,float score1)
    {
        number = number1;
        name = name1;
        score = score1;
    }
    void print()
    {
        cout << "No:" << number << endl;
        cout << "Name:" << name << endl;
        cout << "Score:" << score << endl;
    }
};
class UStudent : public Student{
  protected:
    string major;
    Student auditor1;
    Student auditor2;
  public:
    UStudent(int number1,string name1,float score1,int number2,string name2,float score2,int number3,string name3,float score3,string major1)
    :Student(number1,name1,score1),auditor2(number3,name3,score3),auditor1(number2,name2,score2)
    {
        major = major1;
    }
    void print()
    {
        cout << "Student:" << endl;
        cout << "No:" << number << endl;
        cout << "Name:" << name << endl;
        cout << "Score:" << score << endl;
        cout << "Major:" << major << endl;
    }
    void print_auditor1()
    {
        cout << "auditor:" << endl;
        auditor1.print();
    }
    void print_auditor2()
    {
        cout << "auditor:" << endl;
        auditor2.print();
    }
};
int main()
{
    UStudent stu(2001,"Zhang_Zhi",95,3001,"Wang_Da",70,3002,"Li_San",76,"IOT Engineering");
    stu.print();
    stu.print_auditor1();
    stu.print_auditor2(); 
    return 0;
}