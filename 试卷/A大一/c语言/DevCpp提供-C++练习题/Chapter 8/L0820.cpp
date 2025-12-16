#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    set<string> strings;
    string input;
    while (cin >> input) {
        if (input == "000") {
            break;
        }
        strings.insert(input);
    }
    for (const string& s : strings) {
        cout << s << endl;
    }
    return 0;
}