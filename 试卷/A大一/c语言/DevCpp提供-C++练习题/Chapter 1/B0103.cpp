#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
struct Student
{
    int num;
    float score;
    struct Student *next;
};
struct Student *creat()
{
    struct Student *head = nullptr, *tail = nullptr, *p;
    int num;
    float score;

    while (cin >> num)
    {
        if (num == 0)
        {
            cin >> score;
            break;
        }
        cin >> score;

        p = new Student;
        if (p == nullptr)
        {
            exit(1);
        }
        p->num = num;
        p->score = score;
        p->next = nullptr;
        if (head == nullptr)
        {
            head = p;
        }
        else
        {
            tail->next = p;
        }
        tail = p;
    }
    return head;
}
void print(struct Student *head)
{
    if (head == nullptr)
    {
        cout << "Empty!" << endl;
        return;
    }
    cout << "Scores are:" << endl;
    while (head != nullptr)
    {
        cout << "num:" << head->num << ",score:" << fixed << setprecision(2) << head->score << endl;
        head = head->next;
    }
}

struct Student *delNode(struct Student *head)
{
    if (head == nullptr)
    {
        cout << "Empty! Not found!" << endl;
        return nullptr;
    }

    int delNum;
    cout << "Please input the number you want to delete:" << endl;
    cin >> delNum;

    Student *current = head;
    Student *prev = nullptr;

    if (current != nullptr && current->num == delNum)
    {
        head = current->next;
        cout << "num:" << current->num << " deleted!" << endl;
        delete current;
        return head;
    }

    while (current != nullptr && current->num != delNum)
    {
        prev = current;
        current = current->next;
    }

    if (current != nullptr)
    {
        prev->next = current->next;
        cout << "num:" << current->num << " deleted!" << endl;
        delete current;
    }
    else
    {
        cout << "Not found!" << endl;
    }
    return head;
}

int main()
{
    Student *pt;
    pt = creat();
    print(pt);
    pt = delNode(pt);
    print(pt);
    return 0;
}