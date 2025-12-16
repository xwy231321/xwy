#include <iostream>
#include <stack>
using namespace std;
void ToNary(int m, int n) {
    stack<int> myStack;
    if (m == 0) {
        cout << 0;
        return;
    }
    while (m) {
        myStack.push(m % n);
        m = m / n;
    }
    while (!myStack.empty()) {
        cout << myStack.top();
        myStack.pop();
    }
    cout << endl;
}

int main() {
    int m, n;
    cin >> m >> n;
    ToNary(m, n);
    return 0;
}