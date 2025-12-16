#include <iostream>
#include <iomanip>

using namespace std;

istream& input1(istream& in) {
    in >> hex;
    cout << "Enter number using hex format:";
    return in;
}

int main() {
    int i;
    cin >> input1 >> i;
    cout << "hex:" << hex << i << "------dec:" << dec << i << endl;
    return 0;
}