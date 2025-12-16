#include <iostream>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

int main() {
    queue<int> myqueue;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num) {
        myqueue.push(num);
    }

    while (!myqueue.empty()) {
        cout << myqueue.front();
        myqueue.pop();
        if (!myqueue.empty()) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}