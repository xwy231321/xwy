#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> number;
    list<int>::iterator numberIterator;
    int a,b,c;
    cin >> a >> b >> c;
    number.insert(number.begin(), a);
    number.insert(number.begin(), b);
    number.insert(number.end(), c);

    cout << "List..." << endl;

    for (numberIterator = number.begin();
         numberIterator != number.end();
         ++numberIterator)
        cout << *numberIterator << endl;

    return 0;
}