#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
    string listString;
    string targetString;

    cout << "Please input the list string:" << endl;
    getline(cin, listString);

    cout << "Please input the target string:" << endl;
    getline(cin, targetString);

    size_t found = listString.find(targetString);

    if (found != string::npos) {
        cout << "Found!" << endl;
    } else {
        cout << "Not Found!" << endl;
    }
    return 0;
}