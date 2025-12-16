#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    Student(string name1, string stu_no1, float score1);
    ~Student();
    void show();
    void show_count_sum_ave();

private:
    string name;
    string stu_no;
    float score;
    static int count;
    static float sum;
    static float ave;
};

Student::Student(string name1, string stu_no1, float score1)
{   name = name1;
    stu_no = stu_no1;
    score = score1;
    ++count;
    sum += score;
    ave = sum / count;
}
Student::~Student() 
{
    --count;
    sum -= score;
}

void Student::show()
{
    cout << "\nName:" << name;
    cout << "\nNo:" << stu_no;
    cout << "\nScore:" << score;
}

void Student::show_count_sum_ave()
{
    cout << "\nNumber:" << count;
    cout << "\nAver:" << ave << endl;
}

int Student::count = 0;
float Student::sum = 0.0;
float Student::ave = 0.0;

int main()
{
    Student stu1("Li Ming", "08150201", 90);
    stu1.show();
    stu1.show_count_sum_ave();

    Student stu2("Zhang Wei", "08150202", 89);
    stu2.show();
    stu2.show_count_sum_ave();

    return 0;
}
