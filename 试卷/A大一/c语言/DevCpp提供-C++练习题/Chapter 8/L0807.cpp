#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned int i;
    vector<int> number(5, 99); 
    for (i = 0; i < number.size(); i++)
        cout << number.at(i) << ",";
    cout << endl;
    vector<int> numberl(number);
    for (i = 0; i < numberl.size(); i++)
        cout << numberl.at(i) << ",";
    cout << endl;
    vector<int> number2(number.begin(), number.end());
    for (i = 0; i < number2.size(); i++)
        cout << number2.at(i) << ",";
    cout << endl;
    return 0;
}