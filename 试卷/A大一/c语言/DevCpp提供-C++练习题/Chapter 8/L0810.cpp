#include <iostream>
#include <list>

using namespace std;

void inputList(list<int>& number) {
    int a, b, c;
    cin >> a >> b >> c;
    number.insert(number.begin(), a);
    number.insert(number.begin(), b);
    number.insert(number.end(), c);
}

void printList(const list<int>& number) {
    list<int>::const_iterator numberIterator;
    for (numberIterator = number.begin();
         numberIterator != number.end();
         ++numberIterator) {
        cout << *numberIterator << endl;
    }
}

int main() {
    list<int> number;
    inputList(number);

    cout << "List..." << endl;
    printList(number);

    number.reverse();
    cout << "After reversing..." << endl;
    printList(number);

    return 0;
}