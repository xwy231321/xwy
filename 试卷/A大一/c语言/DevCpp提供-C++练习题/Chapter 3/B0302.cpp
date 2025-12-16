#include <iostream>
#include <vector>

using namespace std;

class Student {
private:
    int num;
    int age;
    float score;
    static float total_score;
    static int student_count;

public:
    // 默认构造函数
    Student() : num(0), age(0), score(0.0f) {
        student_count++;
    }

    Student(int n, int a, float s) : num(n), age(a), score(s) {
        // 注意：这里 student_count 已经在默认构造函数中递增了，需要调整
        student_count--; // 抵消默认构造函数中的递增
        student_count++; // 重新正确递增
    }

    void total() {
        total_score += score;
    }

    static float average() {
        if (student_count == 0) {
            return 0;
        }
        return total_score / student_count;
    }
};

float Student::total_score = 0;
int Student::student_count = 0;

int main() {
    int n;
    cout << "Please input the number of students : ";
    cin >> n;

    Student *p = new Student[n];

    for (int i = 0; i < n; i++) {
        int num, age;
        float score;
        cin >> num >> age >> score;
        p[i] = Student(num, age, score);
        p[i].total();
    }

    cout << "The average score of " << n << " student is " << Student::average() << endl;

    if (p != NULL) delete p;

    return 0;
}
