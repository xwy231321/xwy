#include<bits/stdc++.h>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
typedef string ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

Status InitList(LinkList &L) {
    L = new LNode;
    if (!L) return OVERFLOW;
    L->next = NULL;
    return OK;
}

Status CreateList_H(LinkList &L, int n) {
    L = new LNode;
    L->next = NULL;
    ElemType e;
    for (int i = 0; i < n; i++) {
        cin >> e;
        LinkList s = new LNode;
        s->data = e;
        s->next = L->next;
        L->next = s;
    }
    return OK;
}

void showList(LinkList L) {
    if (L->next == NULL) {
        cout << "empty!" << endl;
        return;
    }
    LinkList p = L->next;
    int i = 1;
    while (p) {
        cout << i++ << ":" << p->data << endl;
        p = p->next;
    }
}

int main() {
    LinkList Lname;
    InitList(Lname);
    showList(Lname);

    CreateList_H(Lname, 5);
    showList(Lname);

    return 0;
}