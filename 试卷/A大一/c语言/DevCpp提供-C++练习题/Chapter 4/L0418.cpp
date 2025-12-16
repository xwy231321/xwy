#include<bits/stdc++.h>
using namespace std;

class Data_rec {
public:
    Data_rec(string namel, char sex1, int age1) : name(namel), sex(sex1), age(age1) {}
protected:
    string name;
    char sex;
    int age;
};
class Student : virtual public Data_rec {
public:
    Student(string name1, char sex1, int age1, string major1, double score1) : Data_rec(name1, sex1, age1), major(major1), score(score1) {}
protected:
    string major;
    double score;
};

class Employee : virtual public Data_rec {
protected:
    string dept;
    double salary;
public:
    Employee(string name1, char sex1, int age1, string dept1, double salary1) : Data_rec(name1, sex1, age1), dept(dept1), salary(salary1) {}
};

class E_Student : public Employee, public Student {
public:
    E_Student(string name1, char sex1, int age1, string major1, double score1, string dept1, double salary1) :
        Data_rec(name1, sex1, age1), Student(name1, sex1, age1, major1, score1),
        Employee(name1, sex1, age1, dept1, salary1) {}
    void print() {
        cout << "name:" << name << endl;
        cout << "sex:" << sex << endl;
        cout << "age:" << age << endl;
        cout << "score:" << score << endl;
        cout << "major:" << major << endl;
        cout << "dept:" << dept << endl;
        cout << "salary:" << salary << endl;
    }
};
int main()
{
    E_Student my_E_Student("WangYue",'f',35,"Computer",95,"Teaching Affaires Office",3500);
    my_E_Student.print(); 
        
    return 0;
}