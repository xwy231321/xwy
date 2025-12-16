#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    Student(int numberl, string namel, float scorel) : number(numberl), name(namel), score(scorel) {}
    void print() {
        cout << "number:" << number << endl;
        cout << "name:" << name << endl;
        cout << "score:" << score << endl;
    }
protected:
    int number;
    string name;
    float score;
};

class UStudent : private Student {
public:
    UStudent(int numberl, string namel, float scorel, string majorl) : Student(numberl, namel, scorel), major(majorl) {}
    void print() {
        Student::print();
        cout << "major:" << major << endl;
    }
private:
    string major;
};
int main()
{
    UStudent stu(22116,"Zhang Zhi",95,"Computer Science");
    stu.print();
        
    return 0;
}