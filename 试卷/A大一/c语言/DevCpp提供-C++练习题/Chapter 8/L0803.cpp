#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned i;
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> number;
    number.insert(number.begin(), a);
    number.insert(number.begin(), b);
    number.insert(number.end(), c);
    cout << "Before deleting..." << endl;
    for (i = 0; i < number.size(); i++) {
        cout << number[i] << endl;
    }

    number.erase(number.begin());
    number.erase(number.begin());
    cout << "After deleting..." << endl;

    for (i = 0; i < number.size(); i++) {
        cout << number[i] << endl;
    }

    return 0;
}