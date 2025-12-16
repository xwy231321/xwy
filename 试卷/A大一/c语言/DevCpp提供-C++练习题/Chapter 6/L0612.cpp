#include <iostream>

using namespace std;

int main() {
    double a = 2.5;
    try {
        throw a;
    } catch (int) {
        cout << "Wrong:int!" << endl;
    } catch (double) {
        cout << "Wrong:double!" << endl;
    }
    cout << "end" << endl;
    return 0;
}