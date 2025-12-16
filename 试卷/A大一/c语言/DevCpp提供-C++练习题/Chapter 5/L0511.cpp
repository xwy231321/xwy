#include <iostream>
#include <string.h>

using namespace std;

class STRING {
public:
    STRING(const char* s);
    ~STRING();
    STRING& operator=(const STRING& s);

private:
    char* ptr;
};

STRING::STRING(const char* s) {
    cout << "Constructor called." << endl;
    ptr = new char[strlen(s) + 1];
    strcpy(ptr, s);
}

STRING::~STRING() {
    cout << "Destructor called.---" << ptr << endl;
    delete[] ptr;
}

STRING& STRING::operator=(const STRING& s) {
    if (this == &s) return *this;
    delete[] ptr;
    ptr = new char[strlen(s.ptr) + 1];
    strcpy(ptr, s.ptr);
    return *this;
}

int main() {
    STRING p1("book");
    STRING p2("jeep");
    p2 = p1;
    return 0;
}