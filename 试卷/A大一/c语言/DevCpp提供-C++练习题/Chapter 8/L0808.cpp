#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

void insert(vector<int>& number) {
    string input;
    getline(cin, input);
    stringstream ss(input);
    int temp;
    while (ss >> temp) {
        number.insert(number.begin(), temp);
    }
}

void vprint(const vector<int>& number) {
    for (int val : number) {
        cout << " " << val;
    }
    cout << endl;
}

void vsort(vector<int>& number) {
    sort(number.begin(), number.end());
}

int main() {
    vector<int> number;
    insert(number);
    cout << "Before sorting ..." << endl;
    vprint(number);
    vsort(number);
    cout << "After sorting ..." << endl;
    vprint(number);
    return 0;
}