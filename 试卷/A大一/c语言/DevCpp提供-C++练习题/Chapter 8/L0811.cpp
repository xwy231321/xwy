#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void PrintLine(string& StringLine) {
    cout << StringLine << endl;
}

int main(void) {
    list<string> Food;
    string a,b,c,d,e;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    getline(cin,d);
    getline(cin,e);
    Food.push_back(a);
    Food.push_back(b);
    Food.push_back(c);
    Food.push_back(d);
    Food.push_back(e);

    for_each(Food.rbegin(), Food.rend(), PrintLine);

    return 0;
}