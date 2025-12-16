#include <iostream>
using namespace std;
const int size = 10;
template <typename Type>
class Stack {
public:
    void init() { tos = 0; }
    void push(Type ch);
    Type pop();
private:
    Type stck[size];
    int tos;
};

template <typename Type>
void Stack<Type>::push(Type ob) {
    if (tos == size) {
        cout << "Stack is full";
        return;
    }
    stck[tos] = ob;
    tos++;
}

template <typename Type>
Type Stack<Type>::pop() {
    if (tos == 0) {
        cout << "Stack is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    Stack<char> s;
    int i;
    s.init();
    s.push('a');
    s.push('b');
    s.push('c');
    for (i = 0; i < 3; i++) cout << "pop s:" << s.pop() << endl;
    Stack<int> is;
    is.init();
    is.push(1);
    is.push(3);
    is.push(5);
    for (i = 0; i < 3; i++) cout << "pop is:" << is.pop() << endl;
    return 0;
}