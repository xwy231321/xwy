#include <iostream>
using namespace std;
class B {
public:
    ~B() {
        cout << "~B()...\n";
    }
};

class D : public B {
public:
    ~D() {
        cout << "~D()...\n";
    }
};

int main() {
    {
        D obj;
        return 0;
    }
}