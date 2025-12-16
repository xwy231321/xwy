#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<char> alphaVector;
    for (int i = 0; i <= 9; i++) {
        alphaVector.push_back('1' + i);
    }
    int size = alphaVector.size();
    vector<char>::iterator theIterator;
    for (int j = 0; j < size; j++) {
        alphaVector.pop_back();
        for (theIterator = alphaVector.begin(); theIterator != alphaVector.end(); theIterator++) {
            cout << *theIterator;
        }
        cout << endl;
    }
    return 0;
}