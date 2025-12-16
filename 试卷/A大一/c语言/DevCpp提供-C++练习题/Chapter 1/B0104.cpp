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
            break;
        }
        cin >> score;

        p = (struct Student *)malloc(sizeof(struct Student));
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