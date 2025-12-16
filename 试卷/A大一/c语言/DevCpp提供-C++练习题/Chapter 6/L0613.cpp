#include <iostream>
using namespace std;

void func(int x) {
    if (x) {
        throw x;
    }
}

int main() {
    try {
        func(5);
        cout << "No here!" << endl;
    } catch (...) {
        cout << "Any type exception!" << endl;
    }
    cout << "end" << endl;
    return 0;
}