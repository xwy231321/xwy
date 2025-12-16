#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> intVector;
    for (int i = 0; i < 10; i++)
        intVector.push_back(i + 10);
    vector<int>::iterator theIterator = intVector.begin();
    cout << "vector1:" << endl;
    for (theIterator = intVector.begin(); theIterator != intVector.end(); theIterator++)
        cout << *theIterator << ",";
    intVector.insert(theIterator, 4, 5);
    cout << endl << "vector2:" << endl;
    for (theIterator = intVector.begin(); theIterator != intVector.end(); theIterator++)
        cout << *theIterator << ",";
    cout << endl;
    return 0;
}